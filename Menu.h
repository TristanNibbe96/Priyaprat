#pragma once
#include <iostream>
#include <string>

class Menu {

public:
    enum ScreenType {Main, Game, Options,};

    virtual void Start() = 0;
    void SetOptions(std::string newOptions[]);
    void PrintOptions();
    ScreenType GetEnteredOption();
    Menu() {};

    std::string TERM = "\0";


private:
    std::string options[9] = {};
    int numOptions{};
    virtual void OpeningMessage() = 0;
};