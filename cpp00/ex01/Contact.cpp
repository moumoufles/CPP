/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltantin <ltantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:47:10 by lucas             #+#    #+#             */
/*   Updated: 2025/11/13 19:16:24 by ltantin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

void Contact::setContact() 
{
	setField("First Name: ", _firstName);
    setField("Last Name: ", _lastName);
    setField("Nickname: ", _nickName);
    setField("Phone Number: ", _phoneNumber);
    setField("Darkest Secret: ", _darkestSecret);
}

void Contact::setField(const std::string &message, std::string &field)
{
    while (1)
    {
        std::cout << message;
        std::getline(std::cin, field);
        if (!field.empty())
            break;
        std::cout << "Empty input.\n";
    }
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