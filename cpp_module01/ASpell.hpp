#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:

        ASpell();
        ASpell(std::string const &name, std::string const &effects);
        ASpell(ASpell const &other);
        virtual ~ASpell();
        ASpell  &operator=(ASpell const &a);
        std::string const &getName() const;
        std::string const &getEffects() const;
        virtual ASpell  *clone() const = 0;
        void            launch(ATarget const &a) const;

    private:

        std::string _name;
        std::string _effects;
};

#endif