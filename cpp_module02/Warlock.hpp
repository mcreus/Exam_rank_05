#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock
{
    public:

        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        std::string const   &getName() const;
        std::string const   &getTitle() const;
        void                setTitle(std::string const &title);
        void                introduce() const;
        void                learnSpell(ASpell *a);
        void                forgetSpell(std::string spell);
        void                launchSpell(std::string spell, ATarget const &a);

    private:

        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &w);
        std::string _name;
        std::string _title;
        SpellBook   _book;
};

#endif