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
    std::cout << "Name: ";
	getline(std::cin, command);
	if (!command.empty())
    	_name = command;
    std::cout << "Lastname: ";
	getline(std::cin, command);
	if (!command.empty())
    	_lastname = command;
    std::cout << "Username: ";
	getline(std::cin, command);
	if (!command.empty())
    	_nickname = command;
	if (command == "\n")
		std::cout << "test";
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

int Player::checkplayer(Player &player) {
	std::string command;

	if (_name.empty() || _lastname.empty() || _nickname.empty()) {
		std::cout << "Wrong input ! Please press Enter.";
		getline(std::cin, command);
		while (!command.empty()){
			std::cout << "Please press Enter.";
			getline(std::cin, command);
		}
		return (0);
	}
	return (1);
}

int selectgun(std::vector <Player> &plist, int player1, int player2)
{
	system("reset");
	std::string command;
	while (1) {
		std::cout << "Please select gun for "<< plist[player1].getusername() << std::endl;
		std::cout << "(M4A1, AK-47) --> ";
		getline(std::cin, command);
		if (command == "AK-47") {
			plist[player1].setgun();
			while (1) {
				system("reset");
				std::cout << "Please select gun for " << plist[player2].getusername() << std::endl;
				std::cout << "(M4A1, AK-47) --> ";
				getline(std::cin, command);
				if (command == "AK-47") {
					plist[player2].setgun();
					break ;
				}
				if (command == "M4A1") {
					plist[player2].setgun2();
					break ;
				}
				else
					std::cout << "Wrong gun name ! Please try again." << std::endl;
			}
			break ;
		}
		else if (command == "M4A1") {
			plist[player1].setgun2();
			while (1) {
				system("reset");
				std::cout << "Please select gun for " << plist[player2].getusername() << std::endl;
				std::cout << "(M4A1, AK-47) --> ";
				getline(std::cin, command);
				if (command == "AK-47") {
					plist[player2].setgun();
					break ;
				}
				if (command == "M4A1") {
					plist[player2].setgun2();
					break ;
				}
				else
					std::cout << "Wrong gun name ! Please try again." << std::endl;
			}
			break ;
		}
		else {
			system("reset");
			std::cout << "Wrong gun name ! Please try again." << std::endl;
		}
	}
	return (1);
}