#pragma once
#include <iostream>
#include <string>
#include "MenuOption.h"

class Menu {

public:
    virtual void Start() = 0;
    void SetOptions(MenuOption newOptions[]);
    void PrintOptions();
    ScreenType GetEnteredOption();
    Menu() {};

    std::string TERM = "\0";


private:
    std::string options[9] = {};
    int numOptions{};
    virtual void OpeningMessage() = 0;
};