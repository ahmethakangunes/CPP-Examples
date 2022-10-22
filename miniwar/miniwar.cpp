/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniwar.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:11:03 by agunes            #+#    #+#             */
/*   Updated: 2022/10/19 16:55:57 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniwar.hpp"

int main()
{
    std::vector<Player> plist;
    std::string command;
    int count = 1;
    while (1)
    {
        system("reset");
        std::cout << "1 -> Add new player." << std::endl;
        std::cout << "2 -> Show players and get player infos." << std::endl;
        std::cout << "3 -> Delete user." << std::endl;
		std::cout << "4 -> Lets begin war !" << std::endl;
		std::cout << "Command --> ";
        getline(std::cin, command);
		if (command == "1")
		{
			system("reset");
			Player player;
			if (player.checkplayer(player))
				plist.push_back(player);
			count++;
		}
        if (command == "2")
        {
            system("reset");
            std::string index;
			username(plist);
            std::cout << "Please select index" << " --> ";
            getline(std::cin, index);
            plist[stoi(index)].showplayerinfos();
            system("reset");
        }
		if (command == "3")
		{
			system("reset");
			std::string index;
			username(plist);
			std::cout << "Please select index" << " --> ";
			getline(std::cin, index);
			deluser(plist, stoi(index));
		}
		if (command == "4")
		{
			std::string index;
			int player1;
			int player2;
			username(plist);
			std::cout << "Please select 2 player" << std::endl;
			std::cout << "Player 1 --> ";
			getline(std::cin, index);
			player1 = stoi(index);
			std::cout << "Player 2 --> ";
			getline(std::cin, index);
			player2 = stoi(index);
			beginwar(plist, player1, player2);
			getchar();
		}
        if (command.empty())
            exit (0);
    }
}