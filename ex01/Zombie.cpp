/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:08:30 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 14:43:56 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	When creating an array of objects in C++ 
	C++ requires the class to have a default constructor 
	Zombie* z = new Zombie[5]("Foo"); 
	is not allowed as C++ can't pass to array constructor 
*/
Zombie::Zombie() {}	

Zombie::~Zombie() {
	std::cout << _name << " has been destroyed." << std::endl;	
}

void Zombie::set_name(std::string name) {
	_name = name;
}

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;	
}
