/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:57:01 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/20 16:43:20 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[ Debug ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << std::endl;  
}

void Harl::info()
{
	std::cout << "[ Info ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	std::cout << std::endl;  
}

void Harl::warning()
{
	std::cout << "[ Warning ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
	std::cout << std::endl;  
}

void Harl::error()
{
	std::cout << "[ Error ]\nThis is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;  
}

void Harl::complain( std::string level ) 
{
	void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4 && level != complains[i])
		i++;

	switch (i)
	{
		case 0:
			(this->*ptr[0])();
			// fall through
		case 1:
			(this->*ptr[1])();
			// fall through
		case 2:
			(this->*ptr[2])();
			// fall through
		case 3:
			(this->*ptr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
