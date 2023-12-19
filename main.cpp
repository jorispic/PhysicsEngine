#include "Game.h"
#include "Vector3D.h"
#include "VectorMath.h"
#include "RigidBody.h"

#include <iostream>

int main(int argc, char* argv[])
{

	const int FPS = 60;
	const int frameDurationGoal = 1000 / FPS;

	Uint32 frameStartTime;
	int frameDuration;

	Game* game = new Game();

	game->init("Navigator 2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 640, false);

	while (game->running()) {

		frameStartTime = SDL_GetTicks();


		game->handleEvents();
		game->update();
		game->render();

		frameDuration = SDL_GetTicks() - frameStartTime;

		if (frameDurationGoal > frameDuration) {
			SDL_Delay(frameDurationGoal - frameDuration);
		}
	}

	game->clean();

	delete game;
	return 0;
}

