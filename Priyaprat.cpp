#include <string>
#include "MainMenu.cpp"
#include "MenuOption.h"

class Priyaprat {
    static Priyaprat* instance;
    MenuOption::ScreenType currentScreen;

    Priyaprat() {
        currentScreen = MenuOption::Main;
    }

public:
    static Priyaprat* getInstance() {
        if (!instance)
            instance = new Priyaprat;
        return instance;
    }

    int getCurrentScreen() {
        return this->currentScreen;
    }

    void setCurrentScreen(MenuOption::ScreenType newScreen) {
        this->currentScreen = newScreen;
    }
};


