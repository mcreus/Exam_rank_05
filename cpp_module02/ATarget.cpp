#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::ATarget(std::string const &type)
{
    this->_type = type;
}

ATarget::ATarget(ATarget const &other)
{
    *this = other;
}

ATarget::~ATarget()
{

}

ATarget  &ATarget::operator=(ATarget const &a)
{
    this->_type = a._type;
    return (*this);
}

std::string const &ATarget::getType() const
{
    return (this->_type);
}

void    ATarget::getHitBySpell(ASpell const &a) const
{
    std::cout << this->_type << " has been " << a.getEffects() << "!" << std::endl;
}