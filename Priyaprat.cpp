#include <string>
#include "MainMenu.cpp"
#include "MenuOption.h"

class Priyaprat {
    static Priyaprat* instance;
    MenuOption::ScreenType currentScreen;

    Priyaprat() {
        setCurrentScreen(MenuOption::Main);
    }

public:
    static Priyaprat* getInstance() {
        if (!instance)
            instance = new Priyaprat;
        return instance;
    }

    void Start() {
        GameLoop();
    }

    int getCurrentScreen() {
        return this->currentScreen;
    }

    void setCurrentScreen(MenuOption::ScreenType newScreen) {
        this->currentScreen = newScreen;
    }

private:
    void GameLoop() {
        while (true) {
            switch (currentScreen) {

            case(MenuOption::Main):
                MainMenu().Start();
                break;

            case(MenuOption::Game):
                MainMenu().Start();
                break;

            case(MenuOption::Options):
                MainMenu().Start();
                break;

            case(MenuOption::Quit):
                return;
            }
        }
    }

};


