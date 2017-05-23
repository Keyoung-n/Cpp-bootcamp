/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:32:34 by knage             #+#    #+#             */
/*   Updated: 2017/05/23 07:32:36 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #ifndef PHONY_HPP
# define PHONY_HPP
#include <iostream>

class Pony {
private:
    std::string _name;

public:
    Pony (std::string name);
    ~Pony ();
    void say_hello();

};
# endif
