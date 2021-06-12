#include <iostream>
#include <string>
#include <vector>

class Menu{
protected:
    std::string options;

public:
    Menu(std::string[] options, int len) {
        for (int i = 0; i < len; i++) {
        }
    }

    void ArrayCopy() {
        options = new std::string[10];
    }

    void PrintOptions() {
        std::cout << "1) Start Game\n";
        std::cout << "2) Options\n";
        std::cout << "3) Quit\n";
    }

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