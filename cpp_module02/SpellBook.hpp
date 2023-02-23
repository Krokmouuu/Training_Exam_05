#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <vector>
class SpellBook
{
	public :
	SpellBook();
	SpellBook(const SpellBook &p);
	SpellBook &operator=(const SpellBook &p);
	~SpellBook();

	void learnSpell(ASpell *p);
	void forgetSpell(std::string const &p);
	ASpell *createSpell(std::string const &p);

	private :

	std::vector<ASpell *> vspell;
};
