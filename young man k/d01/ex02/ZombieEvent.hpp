/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:33:10 by knage             #+#    #+#             */
/*   Updated: 2017/05/23 07:33:12 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <cstdlib>
#include "Zombie.hpp"

class ZombieEvent {
private:
    std::string _type;
public:
    void setZombieType(std::string type);
    void randomChump();
    Zombie* newZombie(std::string name);
};

#endif
