/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:37:04 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/30 15:32:49 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void){

    char arr[][7] = {"HOW", "are", "YOU", "doing"};
    std::cout << "Array content Before using iter: " << std::endl;
    for (int i = 0; i < 4; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl << std::endl;
    int number = 4;

    std::cout << "Array content After using iter: " << std::endl;
    iter(arr, number, caseChange);

    std::cout << std::endl;

    return 0;
}