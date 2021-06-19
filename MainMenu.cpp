#include "MainMenu.h"

class MainMenu : public Menu{

public:
	std::string options[3] = { "Start Game","Options","Quit" };
	int numOptions{};

	MainMenu() {
		numOptions = calcNumberOfOptions(options);

		PrintWelcomeMessage();
		Game();
	}
	
	void Start() {
		PrintWelcomeMessage();
		Game();
	}

private:
	void PrintWelcomeMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!\n";
		Game();
	}

	void Game() {
		PrintOptions(options, numOptions);
		GameMenu gameMenu;
		OptionsMenu optionsMenu;
		int currentStage = GetEnteredOption();

		switch (currentStage)
		{
		case 0:
			gameMenu.Start();
			break;
		case 1:
			optionsMenu.Start();
			break;
		case 2:
			break;
		default:
			break;
		}
	}
};