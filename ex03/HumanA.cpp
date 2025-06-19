/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:18:32 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 15:57:24 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA) : _name(name), _weaponA(weaponA) {}

void HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weaponA.getType() << std::endl;
}