#include "Priyaprat.cpp"

Priyaprat* Priyaprat::instance = 0;

int main()
{
    Priyaprat* game;
    game->getInstance();
    game->Start();
}