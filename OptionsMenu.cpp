#include "Menu.h"

class OptionsMenu : public Menu {

public:
	MenuOption options[2] = { MenuOption("one", MenuOption::Game), MenuOption("two", MenuOption::Main) };

	OptionsMenu() {
		SetOptions(options);
	}

	void Menu::Start() {
		OpeningMessage();
		PrintOptions();
		GetEnteredOption();
	}

private:
	void Menu::OpeningMessage() {
		std::cout << "\nOptions\n";
	}

};