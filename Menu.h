#pragma once
#include <iostream>
#include <string>
#include "MenuOption.h"

class Menu {

public:
    virtual void Start() = 0;
    void SetOptions(MenuOption newOptions[]);
    void PrintOptions();
    MenuOption::ScreenType GetEnteredOption();
    Menu() {};
    MenuOption TERM = MenuOption("TERM", MenuOption::END);


private:
    std::string options[9] = {};
    int numOptions{};
    virtual void OpeningMessage() = 0;
};