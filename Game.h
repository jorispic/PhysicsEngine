#ifndef GAME_H
#define GAME_H

#include "SDL.h"
#include "SDL_image.h"

class Game {

	public :
		Game();
		~Game();

		void init(const char* title, int x, int y, int width, int height, bool fullscreen);

		void handleEvents();
		void update();
		void render();
		void clean();

		bool running() const { return isRunning; }


	private :
		bool isRunning;
		SDL_Window* window;
		SDL_Renderer* renderer;

};

#endif
