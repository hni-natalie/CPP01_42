/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:53:46 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 17:41:09 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weaponB(0) {}

void HumanB::setWeapon(Weapon &newWeapon) {
	_weaponB = &newWeapon;
}

void HumanB::attack() const {
	if (_weaponB)
		std::cout << _name << " attacks with their " << _weaponB->getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack with!" << std::endl;
}
