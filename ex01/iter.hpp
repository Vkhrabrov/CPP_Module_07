/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:37:12 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/30 15:29:27 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T, typename F>
void iter(T* array, int number, F function){
    for (int i = 0; i < number; ++i)
        function(array[i]);
}

void caseChange(char* str) {                                          
    for (int k = 0; str[k] != '\0'; k++) {
        if (std::islower(str[k])) {
            str[k] = std::toupper(str[k]);
        } else if (std::isupper(str[k])) {
            str[k] = std::tolower(str[k]);
        }
    }
    std::cout << str << " ";
}

#endif