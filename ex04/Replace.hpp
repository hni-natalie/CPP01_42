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

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <cstdlib>

class Replace {
	private:
		std::ifstream _infile;
		std::ofstream _outfile;
		std::string _s1;
		std::string _s2;
		
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace();
		void replace_all();
};

#endif