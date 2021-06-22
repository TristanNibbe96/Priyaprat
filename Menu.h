#pragma once
#include <iostream>
#include <string>
#include <array>

class Menu {

public:
    virtual void Start() = 0;

    void PrintOptions(std::array<> options);
    int GetEnteredOption();
    Menu() {};

private:
    virtual void OpeningMessage() = 0;
    virtual void InputLoop() = 0;
};