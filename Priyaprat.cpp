// Priyaprat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int GetEnteredOption() {
    std::string rawNumber = "";
    int number{};

    while (rawNumber.length() != 1 || isdigit(rawNumber[0])) {
        std::cout << "\nPlease enter a valid option: ";
        std::cin >> rawNumber;
    }

    number = std::stoi(rawNumber, NULL, 10);

    return number;
}

int main()
{
    std::cout << "Hello World!\n";
}


