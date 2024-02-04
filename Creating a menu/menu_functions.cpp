#include"menu_functions.hpp"

#include<cstdlib>
#include<iostream>

const AS::MenuItem* AS::exit(const MenuItem* current) {
	std::exit(0);
}
const AS::MenuItem* AS::show_menu(const MenuItem* current) {
	std::cout << "Выберите книгу для чтения" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;

	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Выбор книги > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;

	return current->children[user_input];

}

const AS::MenuItem* AS::read_Pushkin(const MenuItem* current) {
	std::cout << "Выберите произведение" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;

	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Выбор произведения > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;

	return current->children[user_input];
}
const AS::MenuItem* AS::read_Krylov(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current->parent;
}
const AS::MenuItem* AS::read_Lermontov(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current->parent;

}
const AS::MenuItem* AS::read_go_back(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current->parent->parent;

}

//3


const AS::MenuItem* AS::read_Pushkin_dubrovskii(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current->parent;
}
const AS::MenuItem* AS::read_Pushkin_zimnii_vecher(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current->parent;
}
const AS::MenuItem* AS::read_Pushkin_onegin(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current->parent;
}
const AS::MenuItem* AS::read_Pushkin_go_back(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current->parent->parent;
}