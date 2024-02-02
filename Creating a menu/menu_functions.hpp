#pragma once
#include"menu.hpp"
namespace AS {
	const MenuItem* exit(const MenuItem* current);
	const MenuItem* show_menu(const MenuItem* current);

	const MenuItem* read_Pushkin(const MenuItem* current);
	const MenuItem* read_Lermontov(const MenuItem* current);
	const MenuItem* read_Krylov(const MenuItem* current);
	const MenuItem* read_go_back(const MenuItem* current);
	

}