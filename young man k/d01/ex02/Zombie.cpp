/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:32:54 by knage             #+#    #+#             */
/*   Updated: 2017/05/24 09:27:33 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << "<" << this->name << " " << "(" << this->type << ")" << ">" << " Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setType(std::string type) {
  this->type = type;
}

void Zombie::setName(std::string name) {
  this->name = name;
}

std::string Zombie::getType() {
  return this->type;
}

std::string Zombie::getName() {
  return this->name;
}
