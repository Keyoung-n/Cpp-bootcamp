/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:15:05 by knage             #+#    #+#             */
/*   Updated: 2017/05/23 11:15:06 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

brain new_brain;

std::string Human::identify()
const
{
    return _human_brain.identify();
}


brain Human::getBrain() {
    return _human_brain;
}

Human::Human() : _human_brain(new_brain)
{

}