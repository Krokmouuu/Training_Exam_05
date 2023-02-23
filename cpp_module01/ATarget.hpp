#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{

	public :
	ATarget(std::string const &name);
	ATarget(const ATarget &p);
	ATarget &operator=(const ATarget &p);
	~ATarget();

	std::string const &getType() const;

	void getHitBySpell(const ASpell &spell) const;

	virtual ATarget *clone() const = 0;

	protected :

	std::string _type;
};
