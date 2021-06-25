#include "MenuOption.h"

class MenuOption {
private:
	std::string text;
	ScreenType screenToOpen;

public:
	MenuOption(std::string s, ScreenType screen) {
		SetText(s);
		SetScreen(screen);
	}

	void SetText(std::string s) {
		text = s;
	}

	void SetScreen(ScreenType screen) {
		screenToOpen = screen;
	}

	std::string GetText() {
		return text;
	}

	ScreenType GetScreen() {
		return screenToOpen;
	}

	bool Equals(MenuOption *other) {
		return (other->GetText() == this->GetText() && other->GetScreen() == this->GetScreen());
	}


};