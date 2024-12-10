#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget* target) {
	std::map<std::string, ATarget*>::iterator	it = _targetBook.find(target->getType());
	if (target) {
		if (target && it == _targetBook.end())
			_targetBook[target->getType()] = target->clone();
	}
}

void	TargetGenerator::forgetTargetType(std::string target) {
	std::map<std::string, ATarget*>::iterator	it = _targetBook.find(target);
	if (it != _targetBook.end()) {
		delete it->second;
		_targetBook.erase(target);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const& target) {
	std::map<std::string, ATarget*>::iterator	it = _targetBook.find(target);
	if (it != _targetBook.end())
		return it->second;
	return NULL;
}