#include<clocale>
#include<iostream>

#include"menu.hpp"
#include"menu_functions.hpp"


int main() {
	std::setlocale(LC_ALL, "");

	AS::MenuItem read_Pushkin = { "1 - Читать Пушкина", AS::read_Pushkin };
	AS::MenuItem read_Lermontov = { "2 - Читать Лермонтова", AS::read_Lermontov};
	AS::MenuItem read_Krylov = { "3 - Читать Крылова", AS::read_Krylov };
	AS::MenuItem read_go_back = { "0 - Выйти в главное меню", AS::read_go_back };

	AS::MenuItem* read_children[] = { &read_go_back, &read_Pushkin, &read_Lermontov, &read_Krylov };
	const int read_size = sizeof(read_children) / sizeof(read_children[0]);

	AS::MenuItem read = { "1 - Русские писатели", AS::show_menu, read_children, read_size };
	AS::MenuItem exit = { "0 - Завершить чтение", AS::exit };

	AS::MenuItem* main_children[] = { &exit, &read };
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);

	AS::MenuItem main = { nullptr, AS::show_menu, main_children, main_size };

	main.func(&main);
	int user_input;
	do {
		std::cin >> user_input;
		std::cout << std::endl;

		main.children[user_input]->func(main.children[user_input]);

	} while (true);

	return 0;
}