#include"menu_functions.hpp"

#include<cstdlib>
#include<iostream>

void AS::exit(const MenuItem* current) {
	std::exit(0);
}
void AS::show_menu(const MenuItem* current) {
	std::cout << "Выберите книгу для чтения" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;

	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Выбор книги >";

}

void AS::read_Pushkin(const MenuItem* current) {

}
void AS::read_Krylov(const MenuItem* current) {

}
void AS::read_Lermontov(const MenuItem* current) {

}
void AS::read_go_back(const MenuItem* current) {

}
