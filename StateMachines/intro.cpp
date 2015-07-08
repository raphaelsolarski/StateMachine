#include "intro.h"
#include <iostream>
using namespace std;

void Intro::handleEvents()
{
	cout << "Intro::handleEvents()" << endl;
}

void Intro::logic()
{
	cout << "Intro::logic()" << endl;
}

void Intro::render()
{
	cout << "Intro::render()" << endl;
	setNextState(GAME_STATE_GAME);
}