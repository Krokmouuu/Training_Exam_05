#include "ATarget.hpp"

ATarget::ATarget(std::string const &type)
{
	this->_type = type;
}

ATarget::ATarget(const ATarget &p)
{
	this->_type = p._type;
}

ATarget &ATarget::operator=(const ATarget &p)
{
	if (this != &p)
		this->_type = p._type;
	return *this;
}

ATarget::~ATarget(){}

std::string const &ATarget::getType() const
{
	return this->_type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->_type + " has been " + spell.getEffects() + "!" << std::endl;
}
