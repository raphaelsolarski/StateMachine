#include <iostream>
#include <cstdlib>
#include "gameState.h"
#include "game.h"
#include "intro.h"

using namespace std;

int main()
{
	GameState::currentState = new Intro;

	GameState::currentState->handleEvents();
	GameState::currentState->logic();
	GameState::currentState->render();

	GameState::changeState();

	GameState::currentState->handleEvents();
	GameState::currentState->logic();
	GameState::currentState->render();

	system("pause");
	return 0;
}