#include "Menu.h"

class GameMenu : public Menu {

public:
	MenuOption options[2] = { MenuOption(), MenuOption()};

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