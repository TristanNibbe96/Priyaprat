#include <iostream>
#include <string>
#include "Menu.cpp"

class MainMenu : public Menu{

public:
	std::string options[3] = { "Start Game","Options","Quit" };
	int numOptions{};

	MainMenu() {
		numOptions = calcNumberOfOptions(options);

		PrintWelcomeMessage();
		Game();
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