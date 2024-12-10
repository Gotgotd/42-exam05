#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock {
	private: 
	SpellBook	_spellBook;
	std::string _name;
	std::string	_title;
	Warlock();
	Warlock(Warlock const& copy);
	Warlock&	operator=(Warlock const& rhs);

	public:
	Warlock(std::string name, std::string title);
	~Warlock();

	std::string const& getName() const;
	std::string const& getTitle() const;
	void	setTitle(std::string const& title);
	void	introduce() const;

	void	learnSpell(ASpell* spell);
	void	forgetSpell(std::string spell);
	void	launchSpell(std::string spell, ATarget const& target);
};