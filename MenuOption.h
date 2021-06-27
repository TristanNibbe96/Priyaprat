#pragma once
#include <string>

class MenuOption {

public:
	enum ScreenType { Main, Game, Options,MISC , END };

	MenuOption();
	MenuOption(std::string s, ScreenType screen);

	void SetText(std::string s);
	void SetScreen(ScreenType screen);
	
	std::string GetText();
	ScreenType GetScreen();
	
	bool Equals(MenuOption* other);
	MenuOption Copy(MenuOption toFill);

private:
	std::string text;
	ScreenType screenToOpen;
};


