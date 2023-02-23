#include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects)
{
	this->_name = name;
	this->_effects = effects;
}

ASpell::ASpell(const ASpell &p)
{
	this->_name = p._name;
	this->_effects = p._effects;
}

ASpell &ASpell::operator=(const ASpell &p)
{
	if (this != &p)
	{
		this->_name = p._name;
		this->_effects = p._effects;
	}
	return *this;
}

ASpell::~ASpell(){}

std::string const &ASpell::getName() const
{
	return this->_name;
}

std::string const &ASpell::getEffects() const
{
	return this->_effects;
}

void ASpell::launch(const ATarget &p) const
{
	p.getHitBySpell((*this));
}
