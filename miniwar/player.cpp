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

Player::Player()
{
	std::string gun;
	std::string index;

    std::cout << "Name: ";
    getline(std::cin, _name);
    std::cout << "Lastname: ";
    getline(std::cin, _lastname);
    std::cout << "Username: ";
    getline(std::cin, _nickname);
	std::cout << "Please select gun(AK-47 or M4A1): ";
	getline(std::cin, gun);
	if (gun == "AK-47")
		setgun();
	if (gun == "M4A1")
		setgun2();
}

void Player::showplayerinfos(){
    system("reset");
    std::string command;
    std::cout << "Name = " << _name << std::endl;
    std::cout << "Lastname = " << _lastname << std::endl;
    std::cout << "Nickname = " << _nickname << std::endl;
	std::cout << "Gun = " << _gunname << std::endl;
    std::cout << "Please press ENTER. ";
	getline(std::cin, command);
}

void Player::getnickname()
{
    std::cout << _nickname << std::endl;
}

void Player::setgun()
{
	_gunname = "M4A1";
	_color = "DARK";
	_bullet = 30;
	_damage = 18;
}

void Player::setgun2()
{
	_gunname = "AK-47";
	_color = "BLUE";
	_bullet = 30;
	_damage = 15;
}
