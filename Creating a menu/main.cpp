#include<clocale>
#include<iostream>

#include"menu.hpp"
#include"menu_functions.hpp"


int main() {
	std::setlocale(LC_ALL, "");

	AS::MenuItem read = {"1 - ������� ��������", AS::read};
	AS::MenuItem exit = { "0 - ��������� ������", AS::exit};

	AS::MenuItem* main_children[] = { &exit, &read };
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);

	int user_input;
	do {
		std::cout << "�������� ����� ��� ������" << std::endl;
		for (int i = 1; i < main_size; i++) {
			std::cout << main_children[i]->title << std::endl;

		}
		std::cout << main_children[0]->title << std::endl;
		std::cout << "����� ����� >";

		std::cin >> user_input;
		main_children[user_input]->func();

		std::cout << std::endl;

	} while (true);

	return 0;
}