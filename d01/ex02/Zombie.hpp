/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:33:39 by knage             #+#    #+#             */
/*   Updated: 2017/05/24 09:26:05 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <ctime>
class Zombie {

private:
  std::string type;
  std::string name;
public:
    std::string getType();
    std::string getName();
    void setType(std::string type);
    void setName(std::string name);
    void announce();

};
#endif
