/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:03:14 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/30 14:20:57 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include "iostream"

class whatever {
    public:

        template<typename T>
        static void swap(T &input1, T &input2){
            T temp = input1;
            input1 = input2;
            input2 = temp;
        }

        template<typename T>
        static T max(T &input1, T &input2){
            return (input1 > input2 ? input1 : input2);
        }

        template<typename T>
        static T min(T &input1, T &input2){
            return (input1 < input2 ? input1 : input2);
        }

};

#endif