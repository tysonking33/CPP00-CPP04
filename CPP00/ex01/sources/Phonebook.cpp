#include "../includes/Phonebook.h"

Phonebook::Phonebook(){
	curr_con_nbr = 0;
	std::cout << "default Phonebook constructor called" << std::endl;
	total_count = 0;
}

/*Phonebook::Phonebook(const Phonebook& P): PB(P.PB){
	//for (int i = 0; i < 8; i++){
	//	(this->PB[i])(P.PB[i]);
	//}
	std::cout << "Copy Phonebook constructor called" << std::endl;
	printPB();

}

Phonebook &Phonebook::operator=(const Phonebook &src){
	std::cout << "Phonebook Assignation operator called" << std::endl;
    if (this == &src)
        return *this;
	for (int i = 0; i < 8; i++){
		((this->PB[i])(src.PB[i]));
	}
	printPB();
    return *this;
}*/


void Phonebook::ADD(){
	if (curr_con_nbr > 7){
		curr_con_nbr = curr_con_nbr - 8;
		total_count = 8;
	}

	std::cout << "Enter first name: \n";
	std::cin >> PB[curr_con_nbr].first_name;
	std::cout << "Enter last name: \n";
	std::cin >> PB[curr_con_nbr].last_name;
	std::cout << "Enter nickname: \n";
	std::cin >> PB[curr_con_nbr].nick_name;
	std::cout << "Enter darkest secret: \n";
	std::cin >> PB[curr_con_nbr].secret;

	addPn();
	PB[curr_con_nbr].truncate(1);
	PB[curr_con_nbr].truncate(2);
	PB[curr_con_nbr].truncate(3);
	PB[curr_con_nbr].truncate(4);
	curr_con_nbr++;
	if (total_count < 8)
		total_count++;
}

void Phonebook::addPn(){
	std::string temp_phn;
	std::cout << "Enter phone number: \n";
	std::cin >> temp_phn;
	bool number = true;
	for (int i = 0; i < (int)temp_phn.length(); i++){
		if (temp_phn[i] < '0' && temp_phn[i] > '9')
			number = false;
	}
	if (number == false){
		std::cout << "phone number should only consist of digits\n";
		addPn();
	}
	else if (temp_phn.length() > 10){
		std::cout << "phone number too long\n";
		addPn();
	}
	else
		PB[curr_con_nbr].number = std::stoi(temp_phn);
}

void Phonebook::SEARCH(){
	printPB();
	std::string searched_index_str;
	int searched_index = 0;
	std::cout << "Enter the index to display: \n";
	std::cin >> searched_index_str;
	int alldigits = 1;
	for (int i = 0; i < searched_index_str.length(); i++){
		if (!((searched_index_str[i] >= '0') && (searched_index_str[i] <= '9')))
			alldigits = 0;
	}
	if (alldigits == 1){
		for (int i = 0; i < searched_index_str.length(); i++){
			searched_index = searched_index * 10 + (int)searched_index_str[i] - 48;
		}
		std::cout << "search_index: " << searched_index << std::endl;
		if ((searched_index > total_count) || (searched_index < 0)){
			std::cout << "Index not avalible. Search again.\n";
			SEARCH();
		}
		else if ((searched_index >= 0) && (searched_index < total_count))
			PB[searched_index].printAll();
	}
	else{
		std::cout << "index is not a number. Search again.\n";
		SEARCH();
	}
}

void Phonebook::printPB(){
	std::cout << "|-------------------------------------------|\n";
	std::cout << "|  index   |firstName | lastName | nickname |\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < total_count; i++){
		PB[i].printInPb(i);
		std::cout << "\n";
	}
	std::cout << "|-------------------------------------------|\n";
}

void Phonebook::EXIT(){
	for (int i = 0; i < 8; i++)
		delete &PB[i];
	delete[] &PB;
}
