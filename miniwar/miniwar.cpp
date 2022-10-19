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
    Gun *gun1 = new Gun("M4A1", 30, "Blue", 12);
    Gun *gun2 = new Gun("AK-47", 30, "Dark", 18);

    std::vector<Player> plist;
    std::string command;
    int count = 1;
    while (1)
    {
        system("reset");
        std::cout << "ADD = Add new player." << std::endl;
        std::cout << "SEARCH = Show players and get player infos." << std::endl;
        std::cout << "Command -- > ";
        getline(std::cin, command);
        if (command == "SEARCH")
        {
            system("reset");
            std::string index;
            for (int i = 0; i < plist.size(); i++)
            {
				std::cout << i << ". ";
                plist[i].getnickname();
            }
            std::cout << "Please select index" << " --> ";
            getline(std::cin, index);
            plist[stoi(index)].showplayerinfos();
            system("reset");
        }
        if (command == "ADD")
        {
            system("reset");
            Player player;
            plist.push_back(player);
            count++;
        }
    }
}