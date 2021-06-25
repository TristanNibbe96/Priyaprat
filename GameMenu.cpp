#include "Menu.h"

class GameMenu : public Menu {

public:
	MenuOption options[2] = { MenuOption("one", MenuOption::Game), MenuOption("two", MenuOption::Main)};

	GameMenu() {
		SetOptions(options);
	}

	void Menu::Start() {
		OpeningMessage();
		PrintOptions();
		GetEnteredOption();
	}


private:

	void Menu::OpeningMessage() {
		std::cout << "Welcome to GameMenu\n";
	}

};