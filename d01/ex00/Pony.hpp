/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:32:34 by knage             #+#    #+#             */
/*   Updated: 2017/05/24 09:34:02 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #ifndef PHONY_HPP
# define PHONY_HPP
#include <iostream>

class Pony {
private:
    std::string _name;
    std::string _color;
public:
    Pony (std::string name, std::string color);
    ~Pony ();
    void say_hello();

};
# endif
