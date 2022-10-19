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
	std::string index;
    std::cout << "Name: ";
    getline(std::cin, _name);
    std::cout << "Lastname: ";
    getline(std::cin, _lastname);
    std::cout << "Username: ";
    getline(std::cin, _nickname);

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