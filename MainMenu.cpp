#include "MainMenu.h";

class MainMenu : public Menu{

public:
	MenuOption options[1] = {MenuOption()};

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