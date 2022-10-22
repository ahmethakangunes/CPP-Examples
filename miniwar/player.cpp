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
	_hp = 100;
	std::string command;
	while (1){
		std::cout << "Name: ";
		std::getline(std::cin, command);
		if (!command.empty()) {
			_name = command;
			break ;
		}
		if (std::cin.eof())
			exit (0);
		else
			std::cout << "Name cannot be empty ! Please try again ..." << std::endl;
	}
	while (1){
		std::cout << "Lastname: ";
		std::getline(std::cin, command);
		if (!command.empty()) {
			_lastname = command;
			break ;
		}
		if (std::cin.eof())
			exit (0);
		else
			std::cout << "Lastname cannot be empty ! Please try again ..." << std::endl;
	}
	while (1){
		std::cout << "Nickname: ";
		std::getline(std::cin, command);
		if (!command.empty()) {
			_nickname = command;
			break ;
		}
		if (std::cin.eof())
			exit (0);
		else
			std::cout << "Name cannot be empty ! Please try again ..." << std::endl;
	}
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

std::string Player::getnickname()
{
    std::cout << _nickname << std::endl;
	return (_nickname);
}

void Player::setgun()
{
	_gunname = "AK-47";
	_color = "DARK";
	_bullet = 20;
	_damage = 21;
}

void Player::setgun2()
{
	_gunname = "M4A1";
	_color = "BLUE";
	_bullet = 30;
	_damage = 15;
}