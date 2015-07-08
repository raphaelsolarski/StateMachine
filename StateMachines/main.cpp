#include <iostream>
#include <cstdlib>
#include "gameState.h"
#include "game.h"
#include "intro.h"

using namespace std;

int main()
{
	//sposób inicjalizacji, po new wpisujemy nazwê pocz¹tkowego state'a
	GameState::currentState = new Intro;

	//sposób wywo³ania poszczególnych fragmentów pêtli g³ównej
	GameState::currentState->handleEvents();
	GameState::currentState->logic();
	GameState::currentState->render();

	//uaktualnienie state'a(jeœli wyst¹pi³o rz¹danie jego zmiany przez wywo³anie GameState::setNewState()
	GameState::changeState();	//uwaga ten element w pêtli g³ównej powinien wystêpowaæ przed renderingiem

	GameState::currentState->handleEvents();
	GameState::currentState->logic();
	GameState::currentState->render();

	system("pause");
	return 0;
}