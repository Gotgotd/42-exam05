/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:48:03 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 15:51:36 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {
	for (std::map<std::string, ATarget*>::iterator it = targets.begin(); it != targets.end(); it++)
		delete it->second;
	targets.clear();
}

void	TargetGenerator::learnTargetType(ATarget* target) {
	if (targets.find(target->getType()) == targets.end()) {
		targets[target->getType()] = target->clone();
	}
}

void	TargetGenerator::forgetTargetType(std::string const& spell) {
	std::map<std::string, ATarget*>::iterator	it = targets.find(spell);
	if (it != targets.end()) {
		delete it->second;
		targets.erase(it);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const& target) {
	ATarget* copy = NULL;
	if (targets.find(target) != targets.end())
		copy = targets[target];
	return copy;
}