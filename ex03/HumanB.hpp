/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:54:02 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 17:45:11 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

/*
	Use pointer here because weapon can be null
*/
class HumanB {
	private:
		std::string _name;
		Weapon *_weaponB;

	public:
		HumanB( std::string name );
		void setWeapon(Weapon &newWeapon);
		void attack() const;		
};

#endif