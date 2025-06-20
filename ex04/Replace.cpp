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
	if(!_infile)
	{
		std::cerr << "Failed to open file." << std::endl;
		std::exit(1);
	}

	_outfile.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
	if (!_outfile)
	{
		std::cerr << "Failed to create file!" << std::endl;
		std::exit(1);
	}
} 

Replace::~Replace() {
	_infile.close();
	_outfile.close();
}

void Replace::replace_all() {
	size_t pos;
	size_t found;
	std::string line;

	while (std::getline(_infile, line))
	{
		pos = 0;
		// std::string::npos means not a position in the string
		while ((found = line.find(_s1, pos)) != std::string::npos)
		{
			_outfile << line.substr(pos, found - pos);
			_outfile << _s2;
			pos = found + _s1.length(); 
		}
		_outfile << line.substr(pos) << "\n";
	}
}
