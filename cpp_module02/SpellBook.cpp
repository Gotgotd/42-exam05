/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:50:32 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 15:13:30 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {
	for (std::map<std::string, ASpell*>::iterator it = _spellBook.begin(); it != _spellBook.end(); it++)
		delete it->second;
	_spellBook.clear();
}

void	SpellBook::learnSpell(ASpell* spell) {
	if (_spellBook.find(spell->getName()) == _spellBook.end()) {
		_spellBook[spell->getName()] = spell->clone();
	}
}

void	SpellBook::forgetSpell(std::string const& spell) {
	std::map<std::string, ASpell*>::iterator	it = _spellBook.find(spell);
	if (it != _spellBook.end()) {
		delete it->second;
		_spellBook.erase(it);
	}
}

ASpell*	SpellBook::createSpell(std::string const& spell) {
	ASpell* copy = NULL;
	if (_spellBook.find(spell) != _spellBook.end())
		copy = _spellBook[spell];
	return copy;
}