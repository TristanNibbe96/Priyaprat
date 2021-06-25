#pragma once
#include <string>


class MenuOption {

public:
	enum ScreenType { Main, Game, Options, END };

	MenuOption(std::string s, ScreenType screen);
	void SetText(std::string s);
	void SetScreen(ScreenType screen);
	std::string GetText();
	ScreenType GetScreen();
	bool Equals(MenuOption* other);

};

