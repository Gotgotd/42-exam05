/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:50:31 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 14:18:36 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects) {}
ASpell::ASpell(ASpell const& copy) { *this=copy; }
ASpell::~ASpell() {}

ASpell&	ASpell::operator=(ASpell const& rhs) {
	_name = rhs.getName();
	_effects = rhs.getEffects();
	return *this;
}

std::string	ASpell::getName() const { return _name;}
std::string	ASpell::getEffects() const { return _effects;}

void	ASpell::launch(ATarget const& target) const {
	target.getHitBySpell(*this);
}
