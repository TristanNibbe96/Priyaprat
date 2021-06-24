#include "MainMenu.h";

class MainMenu : public Menu{

public:
	std::string options[4] = { "Start Game","Options","Quit", TERM };

	MainMenu() {
		SetOptions(options);
	}
	
	void Menu::Start() {
		OpeningMessage();
		InputLoop();
	}

private:
	void Menu::OpeningMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!\n";
		InputLoop();
	}

	void Menu::InputLoop() {
		PrintOptions();
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