/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:13:02 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/30 14:27:52 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
int a = 2;
int b = 3;
whatever::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << whatever::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << whatever::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
whatever::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << whatever::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << whatever::max( c, d ) << std::endl;
return 0;
}