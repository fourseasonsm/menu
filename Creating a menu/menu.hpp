#pragma once

namespace AS {
	struct MenuItem {
		const char* const title;
		void (*func)();
	};
}