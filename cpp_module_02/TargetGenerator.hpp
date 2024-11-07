/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:19:25 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 15:46:36 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator {

	private:
	std::map<std::string, ATarget*> targets;
	TargetGenerator(TargetGenerator const& copy);
	TargetGenerator&	operator=(TargetGenerator const& rhs);

	public:
	TargetGenerator();
	~TargetGenerator();

	void	learnTargetType(ATarget* target);
	void	forgetTargetType(std::string const&);
	ATarget*	createTarget(std::string const& target);
};