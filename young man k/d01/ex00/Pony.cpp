/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:32:25 by knage             #+#    #+#             */
/*   Updated: 2017/05/24 09:35:22 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) : _name(name), _color(color) {
    std::cout << this->_name << " was created" << std::endl;
}

Pony::~Pony() {
    std::cout << this->_name << " was destroyed" << std::endl;
}

void Pony::say_hello() {
    std::cout << "Hello form " << this->_name << "!" << std::endl;
}
