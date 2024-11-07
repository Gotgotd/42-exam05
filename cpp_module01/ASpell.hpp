/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:13:36 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 14:17:28 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell {

	protected:

	std::string	_name;
	std::string	_effects;

	public:

	ASpell();
	ASpell(std::string name, std::string effects);
	ASpell(ASpell const& copy);
	virtual ~ASpell();

	ASpell&	operator=(ASpell const& rhs);
	std::string	getName() const;
	std::string getEffects() const;

	virtual ASpell*	clone() const = 0;
	void	launch(ATarget const& target) const;
};