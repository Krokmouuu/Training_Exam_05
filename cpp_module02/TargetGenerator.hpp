#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <vector>

class TargetGenerator
{
	public :
	TargetGenerator();
	TargetGenerator(const TargetGenerator &p);
	TargetGenerator &operator=(const TargetGenerator &p);
	~TargetGenerator();

	void learnTargetType(ATarget *p);
	void forgetTargetType(std::string const &p);
	ATarget *createTarget(std::string const &p);

	private :

	std::vector<ATarget *> vtarget;

};
