#include "miniwar.hpp"

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

int selectusers(std::vector<Player> &plist, Infos infos)
{
	std::string command;
	username(plist);
	std::cout << "Please select 2 player" << std::endl;
	while (1){
		std::cout << "1 --> ";
		getline(std::cin, command);
		if (!command.empty()) {
			infos.player1 = stoi(command) - 1;
			while (1) {
				std::cout << "2 --> ";
				getline(std::cin, command);
				if (!command.empty()) {
					infos.player2 = stoi(command) - 1;
					break;
				}
				else if (std::cin.eof())
					exit(0);
				else
					std::cout << "Cannot be empty ! Please try again.." << std::endl;
			}
			break ;
		}
		if (std::cin.eof())
			exit (0);
		else
			std::cout << "Cannot be empty ! Please try again.." << std::endl;
	}
	return (1);
}
void letsgowar(std::vector<Player> &plist, Infos infos)
{
	system("reset");
	std::string index;
	if (selectusers(plist, infos))
		beginwar(plist, infos.player1, infos.player2);
}