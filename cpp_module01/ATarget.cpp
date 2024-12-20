#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(ATarget const& copy) { *this=copy; }
ATarget::ATarget(std::string type): _type(type) {}
ATarget::~ATarget() {}

ATarget&	ATarget::operator=(ATarget const& rhs) {
	_type = rhs.getType();
	return *this;
}

std::string	ATarget::getType() const { return _type; }

void	ATarget::getHitBySpell(ASpell const& spell) const {
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl ;
}