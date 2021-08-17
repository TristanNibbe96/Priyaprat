#include "MainMenu.h";

class MainMenu : public Menu{

public:
	std::string options[4] = { "Start Game","Options","Quit", TERM };

	MainMenu() {
		SetOptions(options);
	}
	
	void Menu::Start() {
		OpeningMessage();
		PrintOptions();
		GetEnteredOption();
	}

private:
	void Menu::OpeningMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!\n";
	}

};