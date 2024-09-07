#include <stdio.h>
#include <SDL2/SDL.h>
#include "constant.h"

SDL_Window* window;
SDL_Renderer* renderer;


int initialize_window(void){
	if(SDL_Init(SDL_INIT_EVERYTHING) != 0){
		fprintf(stderr, "Error initializing SDL.\n");
		return FALSE;
	}
	window = SDL_CreateWindow("my name", 
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH,
		WINDOW_HEIGHT,
		SDL_WINDOW_BORDERLESS
	  );
	if(!window){
		fprintf(stderr, "Error creating window.\n");
		return 0;
	}
	
	renderer = SDL_CreateRenderer(window, -1,0);
	if(!renderer){
	
	}	

	return TRUE;
}

int main(){
	initialize_window();
	printf("Game is running.......\n");
	return 0;
}
