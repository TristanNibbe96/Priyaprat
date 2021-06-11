#include <iostream>
#include <string>
#include "MainMenu.cpp"

void PrintOptions() {
    std::cout << "1) Start Game\n";
    std::cout << "2) Options\n";
    std::cout << "3) Quit\n";
}

int main()
{
    PrintOptions();

    MainMenu mainMenu{};
    mainMenu.GetEnteredOption();
}


