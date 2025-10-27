/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:08:47 by lucas             #+#    #+#             */
/*   Updated: 2025/10/27 16:37:43 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;
	if (N <= 0)
		return nullptr;
	Zombie* horde = new Zombie[N];
	while(i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return horde;
}