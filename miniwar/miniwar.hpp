#ifndef MINIWAR_H
# define MINIWAR_H

#include <iostream>
#include <vector>

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
	void getnickname();
	void showplayerinfos();
	void setgun();
	void setgun2();
private:

	std::string _name;
	std::string _lastname;
	std::string _nickname;
	int _premium;
};

#endif