#include <iostream>
#include <string>

class Menu{
protected:
    std::string options[4] = {"a","a","a","a"};
    int numOptions{};

public:
    Menu(std::string options[], int len) {
        for (int i = 0; i < len; i++) {
            this->options[i] = options[i];
        }
        numOptions = len;
    }

    void PrintOptions() {
        for (int i = 0; i < numOptions; i++) {
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