#include<SDL.h>

int main(int argc, char* args[])
{
	SDL_Window* pWindow = 0;
	SDL_Renderer* pRenderer = 0;

	// initialize SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
	{
		// if succeeded create our window
		pWindow = SDL_CreateWindow("Chapter 1: Setting up SDL",
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			640, 480,
			SDL_WINDOW_SHOWN);
		// if the window creation succeeded create our renderer
		if (pWindow != 0)
		{
			pRenderer = SDL_CreateRenderer(pWindow, -1, 0);
		}
	}
	else
	{
		return 1; // sdl could not initialize
	}
	// everything succeeded lets draw the window
	// set to black // This function expects Red, Green, Blue and
	// Alpha as color values
	SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, 255);
	// clear the window to black
	SDL_RenderClear(pRenderer);
	// show the window
	SDL_RenderPresent(pRenderer);
// set a delay before quitting
	SDL_Delay(5000);
	// clean up SDL
	SDL_Quit();

	return 0;
}