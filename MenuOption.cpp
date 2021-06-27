#include "MenuOption.h"


MenuOption::MenuOption() {
	SetText("");
	SetScreen(MISC);
}

MenuOption::MenuOption(std::string s, MenuOption::ScreenType screen) {
	SetText(s);
	SetScreen(screen);
}

MenuOption MenuOption::Copy(MenuOption toFill) {
	toFill.SetText(GetText());
	toFill.SetScreen(GetScreen());

	return toFill;
}

void MenuOption::SetText(std::string s) {
	text = s;
}

void MenuOption::SetScreen(MenuOption::ScreenType screen) {
	screenToOpen = screen;
}

std::string MenuOption::GetText() {
	return text;
}

MenuOption::ScreenType MenuOption::GetScreen() {
	return screenToOpen;
}

bool MenuOption::Equals(MenuOption *other) {
	return (other->GetText() == this->GetText() && other->GetScreen() == this->GetScreen());
}

