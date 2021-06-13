#include <iostream>
#include <string>
#include <vector>

class Menu{
protected:
    std::string options[];
    int numOptions{};

public:
    Menu(std::string options[], int len) {
        this->options[1] = options[1];
        numOptions = len;
    }

    void PrintOptions() {
        for (int i = 0; i < numOptions; i++) {
            std::cout << i + options[i] + "\n";
        }
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