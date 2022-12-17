#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact() {}

	Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
	{
		setFirstName(firstName);
		setLastName(lastName);
		setNickname(nickname);
		setPhoneNumber(phoneNumber);
		setDarkestSecret(darkestSecret);
	}

	~Contact();

	void setFirstName(std::string firstName);

	void setLastName(std::string lastName);

	void setNickname(std::string nickname);

	void setPhoneNumber(std::string phoneNumber);

	void setDarkestSecret(std::string darkestSecret);
	bool isValidPhoneNumber(std::string phoneNumber);

	std::string getFirstName();

	std::string getLastName();

	std::string getNickname();

	std::string getPhoneNumber();

	std::string getDarkestSecret();
};

#endif