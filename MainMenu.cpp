#include <iostream>
#include <string>
#include "Menu.cpp"

class MainMenu : public Menu{

public:
	std::string mainOptions[3] = { "Start Game","Options","Quit" };
	int numOptions{};

	MainMenu() {
		numOptions = sizeof(mainOptions) / sizeof(mainOptions[0]);
	}

	void PrintWelcomeMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!\n";
		PrintOptions(mainOptions, numOptions);
		GetEnteredOption();
	}
};