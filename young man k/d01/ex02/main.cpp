/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:33:17 by knage             #+#    #+#             */
/*   Updated: 2017/05/23 07:33:18 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
    Zombie *heap_zombie = new Zombie;

    heap_zombie->name = "Heapy";
    heap_zombie->type = "Blood";
    heap_zombie->announce();

    delete heap_zombie;
    Zombie stack_zombie;

    stack_zombie.name = "Stacky";
    stack_zombie.type = "Brains";
    stack_zombie.announce();

    ZombieEvent *greg = new ZombieEvent;
    Zombie *greg_zombie;

    greg->setZombieType("Meat");
    greg_zombie = greg->newZombie("Greg");
    greg_zombie->announce();

    delete greg_zombie;
    delete greg;

    ZombieEvent *randomEvent = new ZombieEvent;

    randomEvent->randomChump();
    ZombieEvent john;
    Zombie *john_zombie;

    john.setZombieType("Brains");
    john_zombie = john.newZombie("John");
    john_zombie->announce();

    delete john_zombie;

    ZombieEvent randomstaticevent;

    randomstaticevent.randomChump();
}