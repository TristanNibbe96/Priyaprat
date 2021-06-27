#pragma once
#include <iostream>
#include <string>
#include "MenuOption.h"

class Menu {
    
public:
    Menu() {};
    virtual void Start() = 0;
    void SetOptions(MenuOption newOptions[]);
    void PrintOptions();
    MenuOption::ScreenType GetEnteredOption();

    MenuOption TERM = MenuOption("TERM", MenuOption::END);

protected:
    virtual void OpeningMessage() = 0;

    MenuOption options[2] = { MenuOption("one", MenuOption::Game), MenuOption("two", MenuOption::Main) };
    int numOptions{};

};