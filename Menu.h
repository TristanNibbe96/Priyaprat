#pragma once
#include <iostream>
#include <string>

class Menu {

public:
    virtual void Start() {};
    virtual void OpeningMessage() {};
    virtual void InputLoop() {};

    void PrintOptions(std::string options[], int len);
    int calcNumberOfOptions(std::string options[]);
    int GetEnteredOption();
};