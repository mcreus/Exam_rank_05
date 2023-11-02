#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->_name << ": My job here is done!" << std::endl;
    std::map<std::string, ASpell*>::iterator    it = _spell.begin();
    std::map<std::string, ASpell*>::iterator    ite = _spell.end();
    while (it != ite)
    {
        delete it->second;
        ++it;
    }
    this->_spell.clear();
}

std::string const   &Warlock::getName() const
{
    return (this->_name);
}

std::string const   &Warlock::getTitle() const
{
    return (this->_title);
}

void    Warlock::setTitle(std::string const &title)
{
    this->_title = title;
}

void    Warlock::introduce() const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void    Warlock::learnSpell(ASpell *a)
{
    if (a)
        _spell.insert(std::pair<std::string, ASpell*>(a->getName(), a->clone()));
}

void    Warlock::forgetSpell(std::string spell)
{
    std::map<std::string, ASpell*>::iterator    it = _spell.find(spell);
    if (it != _spell.end())
        delete it->second;
    _spell.erase(spell);
}

void    Warlock::launchSpell(std::string spell, ATarget const &a)
{
    ASpell  *aspell = _spell[spell];
    if (aspell)
        aspell->launch(a);
}