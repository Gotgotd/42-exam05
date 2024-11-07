/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:34:06 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 11:36:55 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy") {}
Dummy::~Dummy() {}

ATarget*	Dummy::clone() const { return new Dummy();}