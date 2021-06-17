#include <iostream>
#include <string>
#include "Menu.cpp"

class OptionsMenu : public Menu {

public:
	std::string options[3] = { "Start Game","Options","Quit" };
	int numOptions{};

	OptionsMenu() {
		numOptions = sizeof(options) / sizeof(options[0]);
	}

	void PrintWelcomeMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!\n";
		Game();
	}

	void Game() {
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