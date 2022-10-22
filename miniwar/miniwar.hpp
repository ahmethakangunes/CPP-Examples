#ifndef MINIWAR_H
# define MINIWAR_H

#include <iostream>
#include <vector>
#include <time.h>
#include <unistd.h>

 struct Infos{
	int player1;
	int player2;
};

class Gun{
public:
	std::string _gunname;
	std::string _color;
	int _bullet;
	int _damage;
	~Gun();
};

class Player: public Gun{
public:
	Player();
	std::string getnickname();
	void showplayerinfos();
	void setgun();
	void setgun2();
	std::string getusername() {return _nickname;}
	void hitdamage(int hit) {_hp -=hit;}
	int gethp() {return _hp;}
private:
	std::string _name;
	std::string _lastname;
	std::string _nickname;
	int _hp;
};

void username(std::vector<Player> plist);
void deluser(std::vector<Player> &plist, int index);
int beginwar(std::vector<Player> &plist, int player1, int player2);
int	selectgun(std::vector<Player> &plist, int player1, int player2);
void letsgowar(std::vector<Player> &plist, Infos infos);


#endif