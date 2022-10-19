/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:40:44 by agunes            #+#    #+#             */
/*   Updated: 2022/10/19 16:45:56 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniwar.hpp"

Player::Player(Gun *gun1, Gun *gun2)
{
	std::string index;
    std::cout << "Name: ";
    getline(std::cin, _name);
    std::cout << "Lastname: ";
    getline(std::cin, _lastname);
    std::cout << "Username: ";
    getline(std::cin, _nickname);
	std::cout << "Please select gun: (1: AK-47 2: M4A1)" << std::endl;
	getline(std::cin, index);
	if (stoi(index) == 1)
		_gun = *gun1;
	if (stoi(index) == 2)
		_gun = *gun2;
}

void Player::showplayerinfos(){
    system("reset");
    std::string command;
    std::cout << "Name = " << _name << std::endl;
    std::cout << "Lastname = " << _lastname << std::endl;
    std::cout << "Nickname = " << _nickname << std::endl;
    std::cout << "Please press ENTER. ";
    std::cin >> command;
	system("reset");
}

void Player::getnickname()
{
    std::cout << _nickname << std::endl;
}