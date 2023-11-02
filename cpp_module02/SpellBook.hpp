#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"

class SpellBook
{
    public:

        SpellBook();
        ~SpellBook();
        void    learnSpell(ASpell *a);
        void    forgetSpell(std::string const &spell);
        ASpell  *createSpell(std::string const &spell);

    private:

        SpellBook(SpellBook const &other);
        SpellBook   &operator=(SpellBook const &s);
        std::map<std::string, ASpell*>  _spell;
};

#endif