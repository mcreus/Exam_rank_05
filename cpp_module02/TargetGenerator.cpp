# include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget*>::iterator   it = _target.begin();
    std::map<std::string, ATarget*>::iterator   ite = _target.end();
    while (it != ite)
    {
        delete it->second;
        ++it;
    }
    _target.clear();
}

void    TargetGenerator::learnTargetType(ATarget *a)
{
    if (a)
    {
        _target.insert(std::pair<std::string, ATarget*>(a->getType(), a->clone()));
    }
}

void    TargetGenerator::forgetTargetType(std::string const &target)
{
    std::map<std::string, ATarget*>::iterator   it = _target.find(target);
    if (it != _target.end())
    {
        delete it->second;
    }
    _target.erase(target);
}

ATarget *TargetGenerator::createTarget(std::string const &target)
{
    std::map<std::string, ATarget*>::iterator   it = _target.find(target);
    if (it != _target.end())
        return _target[target];
    return (NULL);
}