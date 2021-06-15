#include <iostream>
#include <string>

class Menu{
protected:


public:

    void PrintOptions(std::string options[], int len) {
        for (int i = 0; i < len; i++) {
            std::cout << i << ") " + options[i] + "\n";
        }

        std::cout << std::endl;
    }

    int GetEnteredOption() {
        std::string rawNumber = "";
        int number{};
        std::getline(std::cin, rawNumber);

        while (rawNumber.length() != 1 || !isdigit(rawNumber[0])) {
            std::cout << "\nPlease enter a valid option: ";
            std::getline(std::cin, rawNumber);
        }

        number = std::stoi(rawNumber, NULL, 10);
        return number;
    }



};