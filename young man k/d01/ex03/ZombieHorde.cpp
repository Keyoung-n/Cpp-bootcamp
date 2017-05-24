/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 09:03:23 by knage             #+#    #+#             */
/*   Updated: 2017/05/24 09:28:45 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieHorde.hpp"

std::string random_name() {
    std::string names[] = { "Freddie", "Nickie", "Shawana", "Brande", "Shelton", "Angela", "Ezra", "Mike", "Katherine", "Giancarlo" };

    return names[rand()%10];
}

ZombieHorde::ZombieHorde(int n) {
    _zombie_count = n;
    int i = 0;
    _zombies = new Zombie[n];
    while (i != _zombie_count) {
        _zombies[i].setName(random_name());
        _zombies[i].setType("brains");
        i++;
    }
};

ZombieHorde::~ZombieHorde() {
    delete [] _zombies;
}

void ZombieHorde::announce() {
    for (int i = 0; i < _zombie_count; ++i) {
        _zombies[i].announce();
    }
}
