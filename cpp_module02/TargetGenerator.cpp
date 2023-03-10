#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::TargetGenerator(const TargetGenerator &p)
{
	this->vtarget = p.vtarget;
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &p)
{
	if (this != &p)
		this->vtarget = p.vtarget;
	return *this;
}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *p)
{
	ATarget *tmp = p;
	if (tmp)
		vtarget.push_back(tmp);
}

void TargetGenerator::forgetTargetType(std::string const &p)
{
	for (size_t i = 0; i < vtarget.size(); i++)
	{
		if (vtarget.at(i)->getType() == p)
			vtarget.erase(vtarget.begin() + i);
	}
}

ATarget *TargetGenerator::createTarget(std::string const &p)
{
	for (size_t i = 0; i < vtarget.size(); i++)
	{
		if (vtarget.at(i)->getType() == p)
		{
			ATarget *tmp = vtarget.at(i);
			if (tmp)
				return tmp;
		}
	}
	return NULL;
}
