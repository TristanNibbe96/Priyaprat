#include "Menu.h"

class OptionsMenu : public Menu {

public:
	std::string options[3] = {"Option1","Return to Menu", TERM};

	OptionsMenu() {
		SetOptions(options);
	}

	void Menu::Start() {
		OpeningMessage();
		InputLoop();
	}

private:
	void Menu::OpeningMessage() {
		std::cout << "Options\n";
		InputLoop();
	}

	void Menu::InputLoop() {
		PrintOptions();
		int currentStage = GetEnteredOption();

		switch (currentStage)
		{
		case 0:

			break;
		default:
			break;
		}
	}
};