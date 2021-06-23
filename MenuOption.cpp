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

	void SetText(std::string s) {
		text = s;
	}

	void SetScreen(Menu::ScreenType screen) {
		screenToOpen = screen;
	}

	std::string GetText() {
		return text;
	}

	Menu::ScreenType GetScreen() {
		return screenToOpen
	}


};