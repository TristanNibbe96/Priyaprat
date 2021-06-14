#include <iostream>
#include <string>
#include "Menu.cpp"

class MainMenu : public Menu{
	std::string mainOptions[] = {"Start Game","Options","Quit"};

	MainMenu() : Menu(options,2) {
		
	}

	void PrintWelcomeMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!";
	}
};