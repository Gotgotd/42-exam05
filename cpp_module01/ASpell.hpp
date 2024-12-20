#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	private: 
	std::string	_name;
	std::string	_effects;

	public:
	ASpell();
	ASpell(ASpell const& copy);
	ASpell(std::string name, std::string effects);
	virtual ~ASpell();

	ASpell&	operator=(ASpell const& rhs);
	std::string	getName() const;
	std::string	getEffects() const;

	virtual	ASpell*	clone() const = 0;
	void	launch(ATarget const& target) const;
};