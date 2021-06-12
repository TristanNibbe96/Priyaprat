#include <iostream>
#include <string>

class Menu{
protected:
    std::string options[];

public:
    Menu(std::string options) {
        this->options = new std::string{"jj"};
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