#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void) {
	PhoneBook pb;
	std::string	input;

	pb.show_instruction();
	while (42)
	{
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			pb.AddContact();
		else if (input == "SEARCH")
			pb.SearchContact();
	}
}