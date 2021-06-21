
#include "Menu.h"

class GameMenu : public Menu {

public:
	std::string options[3] = { "Start Game","Options","Quit" };
	int numOptions{};

	GameMenu() {
		numOptions = calcNumberOfOptions(options);
	}




private:
	void OpeningMessage() {
		std::cout << "Welcome to GameMenu\n";
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