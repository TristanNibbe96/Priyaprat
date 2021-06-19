#include "MainMenu.h"

class MainMenu : public Menu{

public:
	std::string options[3] = { "Start Game","Options","Quit" };
	int numOptions{};

	MainMenu() {
		numOptions = calcNumberOfOptions(options);

		OpeningMessage();
		InputLoop();
	}
	
	void Start() {
		OpeningMessage();
		InputLoop();
	}

private:
	void OpeningMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!\n";
		InputLoop();
	}

	void InputLoop() {
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