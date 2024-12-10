#include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::Warlock(Warlock const& copy) { *this=copy; }
Warlock&	Warlock::operator=(Warlock const& rhs) {
	_name = rhs.getName();
	_title = rhs.getTitle();
	return *this;
}

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
	std::map<std::string, ASpell*>::iterator	it = _spellBook.begin();
	for (; it != _spellBook.end(); ++it)
		delete it->second;
	_spellBook.clear();
}

std::string const&	Warlock::getName() const { return _name; }
std::string const&	Warlock::getTitle() const { return _title; }
void	Warlock::setTitle(std::string const& title) { _title = title; }

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell) {
	std::map<std::string, ASpell*>::iterator	it = _spellBook.find(spell->getName());
	if (spell) {
		if (spell && it == _spellBook.end())
			_spellBook[spell->getName()] = spell->clone();
	}
}

void	Warlock::forgetSpell(std::string spell) {
	std::map<std::string, ASpell*>::iterator	it = _spellBook.find(spell);
	if (it != _spellBook.end()) {
		delete it->second;
		_spellBook.erase(spell);
	}
}

void	Warlock::launchSpell(std::string spell, ATarget const& target) {
	std::map<std::string, ASpell*>::iterator	it = _spellBook.find(spell);
	if (it != _spellBook.end())
		_spellBook[spell]->launch(target);
}