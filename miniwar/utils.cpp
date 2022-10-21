#include "miniwar.hpp"

void username(std::vector<Player> plist)
{
	for (int i = 0; i < plist.size(); i++)
	{
		std::cout << i << ". ";
		plist[i].getnickname();
	}
}

void deluser(std::vector<Player> &plist, int index)
{
	plist.erase(plist.begin() + index);
}

void beginwar(std::vector<Player> &plist, int player1, int player2) {
	while (plist[player1].gethp() > 0 && plist[player2].gethp() > 0)
	{
		int x = rand();
		if (x % 2 == 0)
		{
			int hit = rand() % plist[player1]._damage;
			if (plist[player1]._bullet != 0)
			{
				plist[player2].hitdamage(hit);
				plist[player1]._bullet -= 1;
				std::cout << plist[player1].getusername() << " hit " << hit << " " << plist[player2].getusername() << std::endl;
			}
			if (plist[player2].gethp() <= 0)
				std::cout << plist[player2].getusername() << " died." << std::endl;
		}
		else
		{
			int hit = rand() % plist[player2]._damage;
			if (plist[player2]._bullet != 0)
			{
				plist[player1].hitdamage(hit);
				plist[player2]._bullet -= 1;
				std::cout << plist[player2].getusername() << " hit " << hit << " " <<plist[player1].getusername() << std::endl;
			}
			if (plist[player1].gethp() <= 0)
				std::cout << plist[player1].getusername() << " died." << std::endl;
		}
		sleep(1);
	}
}