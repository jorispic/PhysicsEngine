#include "Game.h"
#include "Vector3D.h"
#include "VectorMath.h"

#include <iostream>

int main(int argc, char* argv[])
{

	const int FPS = 60;
	const int frameDurationGoal = 1000 / FPS;

	Uint32 frameStartTime;
	int frameDuration;

	Game* game = new Game();

	//Test Vector3D et VectorMath
	Vector3D A(4, 4, 0);
	Vector3D B(4, 5, 0);

	Vector3D C = normalize(cross(A, B));

	A.log();
	B.log();

	std::cout << "A.A = " << dot(A, A) << std::endl;
	std::cout << "mag(A) = " << mag(A) << std::endl;

	C.log();

	std::cout << "mag(C) = " << mag(C) << std::endl;
	
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

