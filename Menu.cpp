#include "Menu.h"

    void Menu::PrintOptions() {
        for (int i = 0; i < numOptions; i++) {
            std::cout << i << ") " + options[i] + "\n";
        }

        std::cout << std::endl;
    }

    void Menu::SetOptions(std::string newOptions[], std::string end) {
        //TODO
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



