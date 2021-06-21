#pragma once
#include <iostream>
#include <string>

class Menu {

public:
    virtual void Start() = 0;
    virtual void OpeningMessage() = 0;
    virtual void InputLoop() = 0;

    void PrintOptions(std::string options[], int len);
    int calcNumberOfOptions(std::string options[]);
    int GetEnteredOption();
    Menu() {};
};