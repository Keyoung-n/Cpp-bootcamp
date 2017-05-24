/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:14:51 by knage             #+#    #+#             */
/*   Updated: 2017/05/24 10:55:56 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

std::string brain::identify()
const
{
    const void * address = static_cast<const void*>(this);
    std::stringstream ss;
    ss << address;
    std::string str = ss.str();
    return str;
}
