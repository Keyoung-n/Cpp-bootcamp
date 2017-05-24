/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:33:01 by knage             #+#    #+#             */
/*   Updated: 2017/05/24 09:23:02 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type) {
    type.erase(remove_if(type.begin(), type.end(), isspace), type.end());
    this->_type = type;
}

void ZombieEvent::randomChump() {
    std::string names[] = { "Freddie", "Nickie", "Shawana", "Brande", "Shelton" };
    Zombie new_zombie;
    srand(time(0));
    new_zombie.setName(names[(rand() % 4) + 1]);
    new_zombie.setType("brains");
    new_zombie.announce();
}

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie *new_zombie = new Zombie;
    new_zombie->setName(name);
    if (this->_type != "") {
     new_zombie->setType(_type);
    }
    return new_zombie;
}
