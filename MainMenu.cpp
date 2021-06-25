#include "MainMenu.h";

class MainMenu : public Menu{

public:
	MenuOption options[2] = { MenuOption("one", MenuOption::Game), MenuOption("two", MenuOption::Main) };

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