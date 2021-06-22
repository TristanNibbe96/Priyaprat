#pragma once
#include <iostream>
#include <string>

class Menu {

public:
    virtual void Start() = 0;
    void PrintOptions();
    int GetEnteredOption();
    Menu() {
        
    };

private:
    std::string options[9] = {};
    int numOptions{};
    virtual void OpeningMessage() = 0;
    virtual void InputLoop() = 0;
};