#pragma once
#include "gameState.h"

class Game : public GameState
{
public:
	void handleEvents();
	void logic();
	void render();
};