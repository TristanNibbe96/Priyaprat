#include <string>
#include "Menu.h"

class MenuOption {
private:
	std::string text;
	Menu::ScreenType screenToOpen;

public:
	MenuOption(std::string s, Menu::ScreenType screen) {
		text = s;
		screenToOpen = screen;
	}

	void SetText() {

	}

	void SetScreen() {

	}

	std::string GetText() {

	}

	Menu::ScreenType GetScreen() {

	}


};