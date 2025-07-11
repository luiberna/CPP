/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:17:05 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/02 20:40:10 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <cctype>

int     main(int argc, char **argv)
{
    int i = 1;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (argv[i])
    {
        std::string str = argv[i];
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        std::cout << str;
        i++;
    }
    std::cout << std::endl;
    return 0;
}