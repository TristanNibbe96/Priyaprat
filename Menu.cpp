#include "Menu.h"

    void Menu::PrintOptions() {
        for (int i = 0; i < numOptions; i++) {
            std::cout << i << ") " + options[i] + "\n";
        }

        std::cout << std::endl;
    }

    void Menu::SetOptions(MenuOption newOptions[]) {
        int i = 0;
        while (newOptions[i].Equals( (Menu::TERM)* )) {
            options[i] = newOptions[i];
            i++;
        }

        numOptions = i;
    }

    MenuOption::ScreenType GetEnteredOption() {
        std::string rawNumber = "";
        int number = 100;

        std::cout << "Enter: ";
        std::getline(std::cin, rawNumber);

        while (number >= Menu::numOptions) {
            while (rawNumber.length() != 1 || !isdigit(rawNumber[0])) {
                std::cout << "Please enter a valid option: ";
                std::getline(std::cin, rawNumber);
            }
            number = std::stoi(rawNumber, NULL, 10);
            rawNumber = "";
        }

        //TODO implement lookup system to change from local option to global enum option
        return (MenuOption::ScreenType) number;
    }



