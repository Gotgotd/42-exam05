/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:40:51 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 14:45:34 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall") {}
BrickWall::~BrickWall() {}

ATarget*	BrickWall::clone() const { return new BrickWall();}