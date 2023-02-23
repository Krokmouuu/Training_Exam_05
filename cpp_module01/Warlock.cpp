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
	vspell.push_back(spell);
}

void Warlock::forgetSpell(std::string spell)
{
	for (size_t i = 0; i < vspell.size(); i++)
	{
		if (vspell.at(i)->getName() == spell)
			vspell.erase(vspell.begin() + i);
	}
}

void Warlock::launchSpell(std::string name, ATarget const &target)
{
	for (size_t i = 0; i < vspell.size(); i++)
	{
		if (vspell.at(i)->getName() == name)
		{
			ASpell *s = vspell.at(i);
			if (s)
			{
				s->launch(target);
				return ;
			}
		}
	}
}
