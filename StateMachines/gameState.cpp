#include "gameState.h"
// Tutaj nale�y doda� include'y wszystkich wykorzystywanych state'�w w grze
#include "game.h"
#include "intro.h"


//pocz�tkowe ustawienie zmiennych statycznych
GameStates GameState::stateID = GAME_STATE_NULL;
GameStates GameState::nextState = GAME_STATE_NULL;
GameState* GameState::currentState = nullptr;

void GameState::changeState()
{
	if (nextState != GAME_STATE_NULL)
	{
		if (nextState != GAME_STATE_EXIT)
		{
			delete currentState;
		}
		switch (nextState)
		{
			//tutaj nale�y zaimplementowa� usuni�cie ka�dego dodanego state'a
		case GAME_STATE_GAME:
			currentState = new Game();
			break;
			
		case GAME_STATE_INTRO:
			currentState = new Intro();
			break;
		}
		stateID = nextState;
		nextState = GAME_STATE_NULL;
	}
}

void GameState::setNextState(GameStates newState)
{
	if (nextState != GAME_STATE_EXIT)
	{
		nextState = newState;
	}
}

GameStates GameState::getStateID()
{
	return stateID;
}