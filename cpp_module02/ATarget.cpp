/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:05:15 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 14:19:57 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(std::string type): _type(type) {}
ATarget::ATarget(ATarget const& copy) { *this=copy; }
ATarget::~ATarget() {}

ATarget&	ATarget::operator=(ATarget const& rhs) {
	_type = rhs.getType();
	return *this;
}

std::string const&	ATarget::getType() const { return _type;}

void	ATarget::getHitBySpell(ASpell const& spell) const {
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}

