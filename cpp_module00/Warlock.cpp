/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:23:31 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/06 11:57:38 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::Warlock(std::string name, std::string title): _name(name), _title(title) {
	std::cout << _name << ": this looks like another boring day." << std::endl;
}
Warlock::Warlock(Warlock const& copy) {
	*this=copy;
}
Warlock::~Warlock() {
	std::cout << _name << ": my job here is done!" << std::endl;
}

Warlock&	Warlock::operator=(Warlock const& rhs) {
	_name = rhs.getName();
	_title = rhs.getTitle();
	return *this;
}

std::string const&	Warlock::getName() const {
	return _name;
}

std::string const&	Warlock::getTitle() const {
	return _title;
}

void	Warlock::setTitle(std::string const& title) {
	_title = title;
}

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
