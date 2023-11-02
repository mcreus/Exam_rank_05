#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
    public:

        TargetGenerator();
        ~TargetGenerator();
        void    learnTargetType(ATarget *a);
        void    forgetTargetType(std::string const &target);
        ATarget *createTarget(std::string const &target);

    private:

        TargetGenerator(TargetGenerator const &other);
        TargetGenerator &operator=(TargetGenerator const &t);
        std::map<std::string, ATarget*> _target;
};

#endif