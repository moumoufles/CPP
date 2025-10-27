/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:33:49 by lucas             #+#    #+#             */
/*   Updated: 2025/10/27 16:37:47 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void setName(std::string name);
	void announce(void); 
};

Zombie* zombieHorde( int N, std::string name );

#endif