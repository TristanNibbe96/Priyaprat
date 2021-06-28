#include "MainMenu.h";

class MainMenu : public Menu{

public:
	MenuOption options[3] = { MenuOption("Game", MenuOption::Game),
							  MenuOption("Options", MenuOption::Options),
							  TERM.Copy(MenuOption())};

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