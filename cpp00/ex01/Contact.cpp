/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltantin <ltantin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:47:10 by lucas             #+#    #+#             */
/*   Updated: 2025/12/03 18:43:52 by ltantin          ###   ########.fr       */
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
		if (!_firstName.empty()
		&& _firstName.find(' ')  == std::string::npos
		&& _firstName.find('\t') == std::string::npos)
	   		break;
	}
	while (1)
	{
		std::cout << "Last Name: ";
		if (!std::getline(std::cin, _lastName))
			exit(1);
		if (!_lastName.empty()
		&& _lastName.find(' ')  == std::string::npos
		&& _lastName.find('\t') == std::string::npos)
			break;
	}
	while (1)
	{
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, _nickName))
			exit(1);
		if (!_nickName.empty()
		&& _nickName.find(' ')  == std::string::npos
		&& _nickName.find('\t') == std::string::npos)
			break;
	}
	while (1)
	{
		std::cout << "Phone Number: ";
		if (!std::getline(std::cin, _phoneNumber))
			exit(1);

		if (_phoneNumber.empty())
			continue;

		bool valid = true;
		size_t i = 0;
		while (i < _phoneNumber.size())
		{
			char c = _phoneNumber[i];

			if (std::isdigit(static_cast<unsigned char>(c)))
			{
				i++;
				continue;
			}

			if (c == ' ')
			{
				if (i == 0 || i == _phoneNumber.size() - 1)
				{
					valid = false;
					break;
				}
				if (!std::isdigit(static_cast<unsigned char>(_phoneNumber[i - 1])) ||
					!std::isdigit(static_cast<unsigned char>(_phoneNumber[i + 1])))
				{
					valid = false;
					break;
				}
				i++;
				continue;
			}
			valid = false;
			break;
		}

		if (!valid)
			continue;
		break;
	}
	while (1)
	{
		std::cout << "Darkest Secret: ";
		if (!std::getline(std::cin, _darkestSecret))
			exit(1);
		if (_darkestSecret.empty())
			continue;
		char first = _darkestSecret.front();
		char last  = _darkestSecret.back();

		if (std::isspace(static_cast<unsigned char>(first)) ||
			std::isspace(static_cast<unsigned char>(last)))
				continue;
		break;
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