#include "Menu.h"

class GameMenu : public Menu {

public:
	int numOptions{};

	GameMenu() {
		numOptions = calcNumberOfOptions();
	}

	void Menu::Start() {
		OpeningMessage();
		InputLoop();
	}


private:
	std::string options[3] = { "Start Game","Options","Quit" };

	void Menu::OpeningMessage() {
		std::cout << "Welcome to GameMenu\n";
		InputLoop();
	}

	void Menu::InputLoop() {
		PrintOptions(options, numOptions);
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