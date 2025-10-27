/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:33:47 by lucas             #+#    #+#             */
/*   Updated: 2025/10/27 16:50:37 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::Zombie() : name("unnamed") {} 

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " destroyed" << std::endl;
}

