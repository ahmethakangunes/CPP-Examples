/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gun.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:41:55 by agunes            #+#    #+#             */
/*   Updated: 2022/10/19 16:19:16 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniwar.hpp"

Gun::Gun(const std::string& name, int bullet, const std::string& color, int damage){
    _name = name;
    _bullet = bullet;
    _color = color;
    _damage = damage;
}

Gun::~Gun(){

}

void Gun::getguninfos()
{
    std::cout << "Name = " << _name << std::endl;
    std::cout << "Color = " << _color << std::endl;
    std::cout << "Bullet = " << _bullet << std::endl;
    std::cout << "Damage = " << _damage << std::endl;
}