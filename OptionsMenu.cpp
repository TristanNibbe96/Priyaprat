#include "Menu.h"
#include <array>

class OptionsMenu : public Menu {

public:
	int numOptions{};

	OptionsMenu() {
		numOptions = calcNumberOfOptions(options);
	}

	void Menu::Start() {
		OpeningMessage();
		InputLoop();
	}

private:
	std::string options[3] = { "Start Game","Options","Quit" };

	void Menu::OpeningMessage() {
		std::cout << "Options\n";
		InputLoop();
	}

	void Menu::InputLoop() {
		PrintOptions(options, numOptions);
		int currentStage = GetEnteredOption();

		switch (currentStage)
		{
		case 0:

			break;
		default:
			break;
		}
	}
};