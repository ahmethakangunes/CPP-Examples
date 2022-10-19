#ifndef MINIWAR_H
# define MINIWAR_H

#include <iostream>
#include <vector>

class Gun{
	public:
        Gun(const std::string& name, int bullet, const std::string& color, int damage);
        void getguninfos();
        ~Gun();
		int a;
    private:
        std::string _name;
        std::string _color;
        int _bullet;
        int _damage;
};

class Player{
	public:
		Player(Gun *gun1, Gun *gun2);
		void getnickname();
		void showplayerinfos();
    private:
        std::string _name;
        std::string _lastname;
        std::string _nickname;
        int _premium;
};

#endif