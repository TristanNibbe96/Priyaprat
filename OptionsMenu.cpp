#include "Menu.h"

class OptionsMenu : public Menu {

public:
	std::string options[3] = {"Option1","Return to Menu", TERM};

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