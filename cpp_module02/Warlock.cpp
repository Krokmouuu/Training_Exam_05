#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->_name = name;
	this->_title = title;
	std::cout << getName() + ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &p)
{
	this->_name = p._name;
	this->_title = p._title;
}

Warlock &Warlock::operator=(const Warlock &p)
{
	if (this != &p)
	{
		this->_name = p._name;
		this->_title = p._title;
	}
	return *this;
}

Warlock::~Warlock()
{
	std::cout << this->_name + ": My job here is done!" << std::endl;
}

void Warlock::setTitle(std::string const &title)
{
	this->_title = title;
}

std::string const &Warlock::getName() const
{
	return this->_name;
}

std::string const &Warlock::getTitle() const
{
	return this->_title;
}

void Warlock::introduce() const
{
	std::cout << this->_name + ": I am " + this->_name + ", " + this->_title + "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	wspell.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell)
{
	wspell.forgetSpell(spell);
}

void Warlock::launchSpell(std::string name, ATarget const &target)
{
	ASpell *temp = wspell.createSpell(name);
    if (temp)
        temp->launch(target);
}
