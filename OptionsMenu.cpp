#include "Menu.h"

class OptionsMenu : public Menu {

public:
	std::string options[3] = { "Start Game","Options","Quit" };
	int numOptions{};

	OptionsMenu() {
		numOptions = calcNumberOfOptions(options);
	}

	void Start() {

	}

private:
	void OpeningMessage() {
		std::cout << "Options\n";
		InputLoop();
	}

	void InputLoop() {
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