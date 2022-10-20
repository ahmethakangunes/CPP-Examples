#include "miniwar.hpp"

void username(std::vector<Player> plist)
{
	for (int i = 0; i < plist.size(); i++)
	{
		std::cout << i << ". ";
		plist[i].getnickname();
	}
}

void deluser(std::vector<Player> plist, int index)
{
	plist.erase(plist.begin() + index);
}