#pragma once
#include <string>

enum ScreenType { Main, Game, Options, };

class MenuOption {

public:
	MenuOption(std::string s, ScreenType screen);
	void SetText(std::string s);
	void SetScreen(ScreenType screen);
	std::string GetText();
	ScreenType GetScreen();
};

