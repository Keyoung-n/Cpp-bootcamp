/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 07:32:39 by knage             #+#    #+#             */
/*   Updated: 2017/05/24 09:36:50 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int ponyOnTheHeap() {
    Pony *Mr_heap = new Pony("Mr Heap", "White");
    Mr_heap->say_hello();
    unsigned int address = (uintptr_t) Mr_heap;

    delete Mr_heap;
    return address;
}

int ponyOnTheStack() {
    Pony	Mr_stack("Mr Stack", "Black");

    Mr_stack.say_hello();
    return (uintptr_t)&Mr_stack;
}

int main() {
    int heapadd = ponyOnTheHeap();
    std::cout << "Heap object mem address: " << heapadd << std::endl;
    int stackadd = ponyOnTheStack();
    std::cout << "Stack object mecdm address: " << stackadd << std::endl;
}
