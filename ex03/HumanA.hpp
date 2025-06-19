/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:18:42 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 17:46:06 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

/*
	Use reference here because weaponA must be initialised
*/
class HumanA {
	private:
		std::string _name;
		Weapon &_weaponA;

	public:
		HumanA( std::string name, Weapon &weaponA );
		void attack() const;		
};

#endif