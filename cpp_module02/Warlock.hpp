#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{

	public :
	Warlock(const std::string &name, const std::string &title);
	Warlock(const Warlock &p);
	Warlock &operator=(const Warlock &p);
	~Warlock();

	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &title);
	void introduce() const;
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spell);
	void launchSpell(std::string name, ATarget const &target);


	private :

	SpellBook wspell;
	std::string _name;
	std::string _title;

};
