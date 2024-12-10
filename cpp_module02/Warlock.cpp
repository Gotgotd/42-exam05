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
}

std::string const&	Warlock::getName() const { return _name; }
std::string const&	Warlock::getTitle() const { return _title; }
void	Warlock::setTitle(std::string const& title) { _title = title; }

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell) {
	_spellBook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spell) {
	_spellBook.forgetSpell(spell);
}

void	Warlock::launchSpell(std::string spell, ATarget const& target) {
	ASpell* tmp = _spellBook.createSpell(spell);
	if (tmp)
		tmp->launch(target);
}