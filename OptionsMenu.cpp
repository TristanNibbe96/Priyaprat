#include "Menu.h"

class OptionsMenu : public Menu {

public:
	MenuOption options[3] = { MenuOption("Game", MenuOption::Game),
							  MenuOption("Main", MenuOption::Main),
							  TERM.Copy(MenuOption()) };

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