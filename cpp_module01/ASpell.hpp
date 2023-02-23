#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	public :
	ASpell(const std::string &name, const std::string &effects);
	ASpell(const ASpell &p);
	ASpell &operator=(const ASpell &p);
	~ASpell();

	std::string const &getName() const;
	std::string const &getEffects() const;
	void launch(const ATarget &target) const;

	virtual ASpell *clone() const = 0;

	protected :

	std::string _name;
	std::string _effects;	
};
