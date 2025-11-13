/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltantin <ltantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:47:54 by lucas             #+#    #+#             */
/*   Updated: 2025/11/13 19:38:16 by ltantin          ###   ########.fr       */
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
	std::string line;
    while (true)
    {
        std::cout << "Enter the index of the contact to view details: ";
        if (!std::getline(std::cin, line) || line.empty())
            continue;
		bool allDigits = true;
		for (char c : line)
		{
			if (!std::isdigit(static_cast<unsigned char>(c)))
			{
				allDigits = false;
				break;
			}
		}
		if (!allDigits)
		{
			std::cout << "Invalid index.\n";
			continue;
		}
		
		int index = std::stoi(line);
        if (index < 0 || index >= contactCount )
        {
            std::cout << "Invalid index.\n";
            continue;
        }
        contacts[index].displayContact();
        break;
    }
}