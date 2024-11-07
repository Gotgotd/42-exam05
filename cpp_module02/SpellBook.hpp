/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:43:39 by gdaignea          #+#    #+#             */
/*   Updated: 2024/11/07 14:52:03 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <map>
# include "ASpell.hpp"

class SpellBook {
	private:
	std::map<std::string, ASpell*>	_spellBook;
	SpellBook(SpellBook const& copy);
	SpellBook&	operator=(SpellBook const& rhs);

	public:
	SpellBook();
	~SpellBook();

	void	learnSpell(ASpell*);
	void	forgetSpell(std::string const& spell);
	ASpell*	createSpell(std::string const& spell);

};