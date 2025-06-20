/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hni-xuan <hni-xuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:56:41 by hni-xuan          #+#    #+#             */
/*   Updated: 2025/06/20 16:47:04 by hni-xuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2): _s1(s1), _s2(s2) {
	_infile.open(filename.c_str(), std::ios::in);
	if(!_infile.is_open())
	{
		std::cerr << "Failed to open file." << std::endl;
		std::exit(1);
	}

	_outfile.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
	if (!_outfile.is_open())
	{
		std::cerr << "Failed to create file!" << std::endl;
		std::exit(1);
	}
} 