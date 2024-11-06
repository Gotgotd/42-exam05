/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:37:09 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/06 11:51:46 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock {

	private: 
	std::string	_name;
	std::string	_title;
	Warlock();
	Warlock(Warlock const& copy);
	Warlock&	operator=(Warlock const& rhs);

	public:

	Warlock(std::string name, std::string title);
	~Warlock();

	std::string const& getName() const;
	std::string const& getTitle() const;
	void	setTitle(std::string const& title);

	void	introduce() const;

};