#include"menu_item.hpp"

#include<cstdlib>
#include"menu_functions.hpp"

const AS::MenuItem AS::READ_PUSHKIN_DUBROVSKII = {
	"1 - Читать <Дубровский>", AS::read_Pushkin_dubrovskii, &AS::READ_PUSHKIN};
const AS::MenuItem AS::READ_PUSHKIN_ZIMNII_VECHER = {
	"2 - Читать <Зимний Вечер>", AS::read_Pushkin_zimnii_vecher, &AS::READ_PUSHKIN};
const AS::MenuItem AS::READ_PUSHKIN_ONEGIN = {
	"3 - Читать <Евений Онегин>", AS::read_Pushkin_onegin, &AS::READ_PUSHKIN};
const AS::MenuItem AS::READ_PUSHKIN_GO_BACK = {
	"0 - Выйти в предыдущее меню", AS::read_Pushkin_go_back, &AS::READ_PUSHKIN};

namespace {
	const AS::MenuItem* const Pushkin_children[] = {
		&AS::READ_PUSHKIN_GO_BACK,
		&AS::READ_PUSHKIN_DUBROVSKII,
		&AS::READ_PUSHKIN_ZIMNII_VECHER,
		&AS::READ_PUSHKIN_ONEGIN
	};
	const int Pushkin_size = sizeof(Pushkin_children) / sizeof(Pushkin_children[0]);
}

const AS::MenuItem AS::READ_PUSHKIN = {
	"1 - Читать Пушкина", AS::read_Pushkin, &AS::READ, Pushkin_children, Pushkin_size};
const AS::MenuItem AS::READ_LERMONTOV = {
	"2 - Читать Лермонтова", AS::read_Lermontov, &AS::READ, Pushkin_children, Pushkin_size };
const AS::MenuItem AS::READ_KRYLOV = {
    "3 - Читать Крылова", AS::read_Krylov, &AS::READ, Pushkin_children, Pushkin_size };
const AS::MenuItem AS::READ_GO_BACK = {
	"0 - Выйти в главное меню", AS::read_go_back, &AS::READ};

namespace {
	const AS::MenuItem* const read_children[] = {
		&AS::READ_GO_BACK,
		&AS::READ_PUSHKIN,
		&AS::READ_LERMONTOV,
		& AS::READ_KRYLOV
	};
	const int read_size = sizeof(read_children) / sizeof(read_children[0]);
}

const AS::MenuItem AS::READ = { "1 - Русские писатели", AS::show_menu, &AS::MAIN, read_children, read_size };
const AS::MenuItem AS::EXIT = { "0 - Завершить чтение", AS::exit,  &AS::MAIN};

namespace {
	const AS::MenuItem* const main_children[] = { &AS::EXIT, &AS::READ };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const AS::MenuItem AS::MAIN = {
	nullptr, AS::show_menu, nullptr, main_children, main_size };
