/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:15:05 by knage             #+#    #+#             */
/*   Updated: 2017/05/24 11:02:31 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identify()
const
{
    return human_brain.identify();
}


const brain& Human::getBrain() {
    return human_brain;
}

Human::Human() : human_brain()
{

}
