#pragma once

//typ okreœlaj¹cy wszystkie stany gry
//jeœli dodajesz nowy stan to musisz go tutaj uwzglêdniæ
enum GameStates
{
	GAME_STATE_NULL,
	GAME_STATE_INTRO,
	GAME_STATE_GAME,
	GAME_STATE_EXIT
};

//g³ówna klasa GameState po której bêdzie dziedziczyæ ka¿da klasa state'a
class GameState
{
public:
	static void changeState();
	static void setNextState(GameStates newState);
	static GameStates getStateID();
	virtual void handleEvents() = 0;
	virtual void logic() = 0;
	virtual void render() = 0;
	virtual ~GameState(){};

	static GameStates stateID;
	static GameStates nextState;
	static GameState *currentState;
};