#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}

void	SpellBook::learnSpell(ASpell* spell) {
	std::map<std::string, ASpell*>::iterator	it = _spellBook.find(spell->getName());
	if (spell) {
		if (spell && it == _spellBook.end())
			_spellBook[spell->getName()] = spell->clone();
	}
}

void	SpellBook::forgetSpell(std::string spell) {
	std::map<std::string, ASpell*>::iterator	it = _spellBook.find(spell);
	if (it != _spellBook.end()) {
		delete it->second;
		_spellBook.erase(spell);
	}
}

ASpell*	SpellBook::createSpell(std::string const& spell) {
	std::map<std::string, ASpell*>::iterator	it = _spellBook.find(spell);
	if (it != _spellBook.end())
		return it->second;
	return NULL;
}