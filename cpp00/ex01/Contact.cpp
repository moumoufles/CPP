/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltantin <ltantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:47:10 by lucas             #+#    #+#             */
/*   Updated: 2025/11/14 17:05:04 by ltantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

void Contact::setContact() 
{
	while (1)
	{
		std::cout << "First Name: ";
		if (!std::getline(std::cin, _firstName))
			exit(1);
		if (!_firstName.empty())
			break;
	}
	std::cout << "Last Name: ";
	std::getline(std::cin, _lastName);
	
	std::cout << "Nickname: ";
	std::getline(std::cin, _nickName);
	
	std::cout << "Phone Number: ";
	std::getline(std::cin, _phoneNumber);
	
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _darkestSecret);
}

void Contact::displayContact() const 
{
	std::cout << "First Name: " << _firstName << std::endl;
	std::cout << "Last Name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickName << std::endl;
	std::cout << "Phone Number: " << _phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}

void Contact::displayShort(int index) const
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << (_firstName.length() > 10 ? _firstName.substr(0, 9) + "." : _firstName) << "|";
	std::cout << std::setw(10) << (_lastName.length() > 10 ? _lastName.substr(0, 9) + "." : _lastName) << "|";
	std::cout << std::setw(10) << (_nickName.length() > 10 ? _nickName.substr(0, 9) + "." : _nickName) << std::endl;
}