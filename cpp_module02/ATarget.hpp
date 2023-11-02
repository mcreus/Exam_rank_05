#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
    public:

        ATarget();
        ATarget(std::string const &type);
        ATarget(ATarget const &other);
        virtual ~ATarget();
        ATarget  &operator=(ATarget const &a);
        std::string const &getType() const;
        virtual ATarget  *clone() const = 0;
        void            getHitBySpell(ASpell const &a) const;

    private:

        std::string _type;
};

#endif