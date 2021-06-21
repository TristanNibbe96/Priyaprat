#include "Menu.h"

    void Menu::PrintOptions(std::string options[], int len) {
        for (int i = 0; i < len; i++) {
            std::cout << i << ") " + options[i] + "\n";
        }
    }

    int Menu::calcNumberOfOptions(std::string options[]) {
        return sizeof(options) / sizeof(options[0]);
    }

    int Menu::GetEnteredOption() {
        std::string rawNumber = "";
        int number{};

        std::cout << "Enter: ";
        std::getline(std::cin, rawNumber);

        while (rawNumber.length() != 1 || !isdigit(rawNumber[0])) {
            std::cout << "Please enter a valid option: ";
            std::getline(std::cin, rawNumber);
        }

        number = std::stoi(rawNumber, NULL, 10);
        return number;
    }



