#include "Menu.h"

class GameMenu : public Menu {

public:
	std::string options[3] = { "Start Game","Options","Quit" };

	GameMenu() {
		SetOptions(options, options[3]);
	}

	void Menu::Start() {
		OpeningMessage();
		InputLoop();
	}


private:
	void Menu::OpeningMessage() {
		std::cout << "Welcome to GameMenu\n";
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