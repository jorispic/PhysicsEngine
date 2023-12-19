#include "Game.h"
#include "RigidBody.h"

#include <iostream>
#include <cstdlib> 
#include <ctime> 

Game::Game() 
{}

Game::~Game()
{}


int randomInt(int a, int b)
{
	return (rand() % (a - b)) + a;
}


void Game::init(const char* title, int x, int y, int width, int height, bool fullscreen)
{
	srand((unsigned)time(0));


	Uint32 flags = 0;
	if (fullscreen) {
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "SDL initialized" << std::endl;

		window = SDL_CreateWindow(title, x, y, width, height, flags);
		if (window)
		{
			std::cout << "Window created" << std::endl;
		}

		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
			std::cout << "Renderer created" << std::endl;
		}

		isRunning = true;
	}
	else {
		isRunning = false;
	}

	const int bodyNumber = 10;
	RigidBody bodyList[bodyNumber];

	for (int i = 0; i < bodyNumber; i++)
	{
		RigidBody* body = nullptr;

		float x = randomInt(0, width);
		float y = randomInt(0, height);


	}

	/*if (body)
	{
		std::cout << "Body created is " << std::endl;
		//Fonction drawRect()
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		SDL_Rect rect;

		rect.w = body->width;
		rect.h = body->height;
		rect.x = 50;
		rect.y = 50;
		SDL_RenderDrawRect(renderer, &rect);
		SDL_RenderPresent(renderer);
	}
	else {
		std::cout << "Body creation failed" << std::endl;
	}

	
	delete body;*/
}

void Game::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type) {
	case SDL_QUIT:
		isRunning = false;
		break;

	default :
		break;
	}
}

void Game::update()
{

}

void Game::render()
{
	/*/SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);*/
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	std::cout << "Game cleaned" << std::endl;
}

