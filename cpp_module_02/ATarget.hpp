/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:05:32 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 14:17:56 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {

	protected:
	std::string	_type;

	public:
	ATarget();
	ATarget(std::string type);
	ATarget(ATarget const& copy);
	virtual ~ATarget();

	ATarget&	operator=(ATarget const& rhs);
	std::string	const& getType() const;

	virtual ATarget*	clone() const = 0;
	void	getHitBySpell(ASpell const& spell) const ;
};