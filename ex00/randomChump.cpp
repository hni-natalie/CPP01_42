/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:43:10 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 14:09:28 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

/*
	Zombie object is created inside the function 
	The method in the object is only used in this function 
	After the function ends, we don't need this object anymore 
	Hence, stack is perfect in this case
*/
void randomChump( std::string name ) {
	Zombie zombie(name);
	zombie.announce(); 
}
