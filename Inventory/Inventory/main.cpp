#include <iostream>
#include "GameManager.h"

using namespace std;

void main()
{
	GameManager *game = new GameManager();
	game->GameStart();

	delete game;
}