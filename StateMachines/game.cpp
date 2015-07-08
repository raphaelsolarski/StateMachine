#include <iostream>
#include "game.h"
using namespace std;

void Game::handleEvents()
{
	cout << "Game::handleEvents()" << endl;
}

void Game::logic()
{
	cout << "Game::logic()" << endl;
}

void Game::render()
{
	cout << "Game::render()" << endl;
	setNextState(GAME_STATE_EXIT);
}