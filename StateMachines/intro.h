#pragma once
#include "gameState.h"

class Intro : public GameState
{
public:
	void handleEvents();
	void logic();
	void render();
};