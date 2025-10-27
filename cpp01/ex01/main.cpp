/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:33:32 by lucas             #+#    #+#             */
/*   Updated: 2025/09/08 18:22:36 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n = 5;
    int i = 0;
    Zombie* horde = zombieHorde(n, "HordeZombie");

    while (i < n)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
}