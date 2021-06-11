#include <iostream>
#include <string>

class Menu{
    int GetEnteredOption() {
        std::string rawNumber = "";
        int number{};

        while (rawNumber.length() != 1 || !isdigit(rawNumber[0])) {
            std::cout << "\nPlease enter a valid option: ";
            std::getline(std::cin, rawNumber);
        }

        number = std::stoi(rawNumber, NULL, 10);

        return number;
    }

};