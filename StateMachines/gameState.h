#pragma once

enum GameStates
{
	GAME_STATE_NULL,
	GAME_STATE_INTRO,
	GAME_STATE_GAME,
	GAME_STATE_EXIT
};

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