/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 09:58:28 by knage             #+#    #+#             */
/*   Updated: 2017/05/22 10:21:04 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char		uppercase(char c)
{
	if (c >= 97 && c <= 122)
		return (c = c - 32);
	else
		return (c);
}

void print_string(char *string) {
  for (int i = 0; string[i]; i++) {
    std::cout << uppercase(string[i]);
  }
}

int main(int ac, char ** av) {
 if (ac > 1) {
   for (int i = 1; av[i]; i++) {
     print_string(av[i]);
   }
   std::cout << '\n';
 }
 else
  std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
 }
