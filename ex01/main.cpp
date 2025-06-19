/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:21:07 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 17:51:04 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 5;
	Zombie *new_zombie = zombieHorde(n, "Foo");
	
	for (int i = 0; i < n; i++) {
		new_zombie[i].announce();
	}

	delete[] new_zombie;
	return 0;
}
