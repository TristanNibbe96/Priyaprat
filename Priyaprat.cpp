#include <iostream>
#include <string>
#include "Menu.h"
#include "MainMenu.cpp"

int main()
{
    Priyaprat* game = game->getInstance();
}

class Priyaprat {
    static Priyaprat* instance;
    Menu::ScreenType currentScreen;

    Priyaprat() {
        currentScreen = Menu::Main;
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

    void setCurrentScreen(Menu::ScreenType newScreen) {
        this->currentScreen = newScreen;
    }
};


