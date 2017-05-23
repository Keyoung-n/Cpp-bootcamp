/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:14:51 by knage             #+#    #+#             */
/*   Updated: 2017/05/23 11:14:52 by knage            ###   ########.fr       */
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
    return str.substr(0, 8);
}
