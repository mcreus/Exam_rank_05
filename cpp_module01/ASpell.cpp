#include "ASpell.hpp"

ASpell::ASpell()
{

}

ASpell::ASpell(std::string const &name, std::string const &effects)
{
    this->_name = name;
    this->_effects = effects;
}

ASpell::ASpell(ASpell const &other)
{
    *this = other;
}

ASpell::~ASpell()
{

}

ASpell  &ASpell::operator=(ASpell const &a)
{
    this->_name = a._name;
    this->_effects = a._effects;
    return (*this);
}

std::string const &ASpell::getName() const
{
    return (this->_name);
}

std::string const &ASpell::getEffects() const
{
    return (this->_effects);
}

void    ASpell::launch(ATarget const &a) const
{
    a.getHitBySpell(*this);
}