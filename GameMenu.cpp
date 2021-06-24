#include "Menu.h"

class GameMenu : public Menu {

public:
	std::string options[4] = { "Play", "Options", "Return to menu", TERM };

	GameMenu() {
		SetOptions(options);
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