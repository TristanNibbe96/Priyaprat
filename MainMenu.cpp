#include <iostream>
#include <string>
#include "Menu.cpp"

class MainMenu : public Menu{
	std::string mainOptions[3] = {"Start Game","Options","Quit"};

public:
	MainMenu() : Menu(options, sizeof(mainOptions) / sizeof(mainOptions[0]) ) {
		
	}

	void PrintWelcomeMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!\n";
		PrintOptions();
		GetEnteredOption();
	}
};