/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:23:31 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 17:55:26 by gdaignea         ###   ########.fr       */
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
	_spellBook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spell) {
	_spellBook.forgetSpell(spell);
}

void	Warlock::launchSpell(std::string spell, ATarget& target) {
	if (_spellBook.createSpell(spell)) {
		_spellBook.createSpell(spell)->launch(target);
	}
}
