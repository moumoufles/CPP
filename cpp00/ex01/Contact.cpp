/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:47:10 by lucas             #+#    #+#             */
/*   Updated: 2025/10/20 17:46:47 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

void Contact::setContact() 
{
	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	
	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
}

void Contact::displayContact() const 
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void Contact::displayShort(int index) const
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|";
	std::cout << std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|";
	std::cout << std::setw(10) << (nickName.length() > 10 ? nickName.substr(0, 9) + "." : nickName) << std::endl;
}