#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"


class TargetGenerator {
	private:
	std::map<std::string, ATarget*>	_targetBook;
	TargetGenerator(TargetGenerator const& copy);
	TargetGenerator&	operator=(TargetGenerator const& rhs);

	public:
	TargetGenerator();
	~TargetGenerator();

	void	learnTargetType(ATarget* target);
	void	forgetTargetType(std::string target);
	ATarget*	createTarget(std::string const& spell);
};