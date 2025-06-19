/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:00:09 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/19 17:47:13 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str; 
	
	// address
	std::cout << "address of str: " << &str << std::endl;
	std::cout << "address of stringPTR: " << stringPTR << std::endl;
	std::cout << "address of stringREF: " << &stringREF << std::endl;

	// value
	std::cout << "str: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	
	return (0);
}
