#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::SpellBook(const SpellBook &p)
{
	this->vspell = p.vspell;
}

SpellBook &SpellBook::operator=(const SpellBook &p)
{
	if (this != &p)
		this->vspell = p.vspell;
	return *this;
}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *p)
{
	ASpell *nouvo = p;
	if (nouvo)
		vspell.push_back(nouvo);
}
void SpellBook::forgetSpell(std::string const &p)
{
	for (size_t i = 0; i < vspell.size(); i++)
	{			
		if (vspell.at(i)->getName() == p)
			vspell.erase(vspell.begin() + i);
	}
}
ASpell * SpellBook::createSpell(std::string const &p)
{
	for (size_t i = 0; i < vspell.size(); i++)
	{
		if (vspell.at(i)->getName() == p)
		{
			ASpell *tmp = vspell.at(i);
			return tmp;
		}
	}
	return NULL;
}
