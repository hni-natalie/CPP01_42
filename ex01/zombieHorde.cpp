/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:21:32 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 14:48:03 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name) {
	 if (N <= 0)
	 	return (0);

	// allocate array of Zombies
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		horde[i].set_name(name);
	}

	// return pointer to the first zombie
	return horde;
}