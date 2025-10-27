/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:47:54 by lucas             #+#    #+#             */
/*   Updated: 2025/10/22 15:25:24 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook() 
{
	contactCount = 0;
	nextIndex = 0;
}

void PhoneBook::addContact()
{
	contacts[nextIndex].setContact();

	if (contactCount < 8)
		contactCount++;

	nextIndex = (nextIndex + 1) % 8;
	std::cout << "Contact added!" << std::endl;
}

void PhoneBook::searchContact() const 
{
	int i = 0;
	
	if (contactCount == 0) 
	{
		std::cout << "No contacts, use the command ADD." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	while (i < contactCount) 
	{
		contacts[i].displayShort(i);
		i++;
	}
	std::cout << "Enter the index of the contact to view details: ";
	int index;
	std::cin >> index;
	if(std::cin.fail() || index < 0 || index >= contactCount) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index." << std::endl;
		return;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	contacts[index].displayContact();
}