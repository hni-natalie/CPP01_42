/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:13:23 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 14:09:23 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


/*
	Since we need the Zombie object to exist after this function ends,
	we allocate it on the heap and return a pointer to it

	This allows us to use its methods outside the function,
	and we must manually delete it later to free memory
*/
Zombie* newZombie(std::string name) {
	return new Zombie(name);
}
