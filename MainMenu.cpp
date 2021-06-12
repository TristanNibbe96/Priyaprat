#include <iostream>
#include <string>
#include "Menu.cpp"

class MainMenu : public Menu{

	MainMenu() {

	}

	void PrintWelcomeMessage() {
		std::cout << "Welcome to Priyaprat, survive if you can!";
	}
};