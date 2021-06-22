#include "MainMenu.h";

class MainMenu : public Menu{

public:

	MainMenu() {
		OpeningMessage();
		InputLoop();
	}
	
	void Menu::Start() {
		OpeningMessage();
		InputLoop();
	}

private:
	std::string options[3] = { "Start Game","Options","Quit" };

	void Menu::OpeningMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!\n";
		InputLoop();
	}

	void Menu::InputLoop() {
		options.[];
		PrintOptions(options);
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