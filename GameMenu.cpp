#include "Menu.h"

class GameMenu : public Menu {

public:
	MenuOption options[3] = { MenuOption("Main", MenuOption::Main),
							  MenuOption("Options", MenuOption::Options),
							  TERM.Copy(MenuOption()) };

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