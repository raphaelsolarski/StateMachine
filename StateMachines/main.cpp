#include <iostream>
#include <cstdlib>
#include "gameState.h"
#include "game.h"
#include "intro.h"

using namespace std;

int main()
{
	//spos�b inicjalizacji, po new wpisujemy nazw� pocz�tkowego state'a
	GameState::currentState = new Intro;

	//spos�b wywo�ania poszczeg�lnych fragment�w p�tli g��wnej
	GameState::currentState->handleEvents();
	GameState::currentState->logic();
	GameState::currentState->render();

	//uaktualnienie state'a(je�li wyst�pi�o rz�danie jego zmiany przez wywo�anie GameState::setNewState()
	GameState::changeState();	//uwaga ten element w p�tli g��wnej powinien wyst�powa� przed renderingiem

	GameState::currentState->handleEvents();
	GameState::currentState->logic();
	GameState::currentState->render();

	system("pause");
	return 0;
}