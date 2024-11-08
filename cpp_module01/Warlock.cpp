/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:23:31 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/08 11:11:56 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::Warlock(std::string name, std::string title): _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::Warlock(Warlock const& copy) {
	*this=copy;
}
Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
	for (std::map<std::string, ASpell*>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
		delete it->second;
	_spellBook.clear();	
}

Warlock&	Warlock::operator=(Warlock const& rhs) {
	_name = rhs.getName();
	_title = rhs.getTitle();
	return *this;
}

std::string const&	Warlock::getName() const {
	return _name;
}

std::string const&	Warlock::getTitle() const {
	return _title;
}

void	Warlock::setTitle(std::string const& title) {
	_title = title;
}

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell*	spell) {
	if (spell) {
		_spellBook[spell->getName()] = spell->clone(); 
	}
}

void	Warlock::forgetSpell(std::string spell) {
	std::map<std::string, ASpell*>::iterator	it = _spellBook.find(spell);
	if (it != _spellBook.end()) {
		delete it->second;
		_spellBook.erase(it);
	}
}

void	Warlock::launchSpell(std::string spell, ATarget& target) {
	if (_spellBook.find(spell) != _spellBook.end()) {
		_spellBook[spell]->launch(target);
	}
}
