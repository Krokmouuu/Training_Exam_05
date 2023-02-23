#pragma once

#include <iostream>

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

	private :
	
	std::string _name;
	std::string _title;

};
