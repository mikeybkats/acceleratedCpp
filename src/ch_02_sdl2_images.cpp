#include <SDL2/SDL.h>
#include <stdio.h>

#include <string>

using std::string;

int SCREEN_WIDTH = 640;
int SCREEN_HEIGHT = 480;

// the window we'll be rendering to
SDL_Window* gWindow = NULL;

// the surface contained by the window
SDL_Surface* gScreenSurface =
    NULL;  // An SDL surface is just an image data type that contains the
           // pixels of an image along with all data needed to render it

// the image we will load and show on the screen
SDL_Surface* gHelloWorld =
    NULL;  // The reason is that 1) we'll be dynamically allocating memory to
           // load images and 2) it's better to reference an image by memory
           // location.
           // alway initialize pointers with NULL immediately after declaring

bool init() {
  // inilialization flag
  bool success = true;

  // initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    success = false;
  } else {
    // create window
    gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                               SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (gWindow == NULL) {
      printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
      success = false;
    } else {
      // get window surface
      gScreenSurface = SDL_GetWindowSurface(gWindow);
    }
  }

  return success;
}

bool loadMedia() {
  // Loading success flag
  bool success = true;

  // Load splash image
  gHelloWorld = SDL_LoadBMP("assets/hello_world.bmp");

  if (gHelloWorld == NULL) {
    printf("Unable to load image %s! SDL Error: %s\n", "assets/hello_world.bmp",
           SDL_GetError());
    success = false;
  }

  return success;
}

void close() {
  // deallocate surface
  SDL_FreeSurface(gHelloWorld);
  gHelloWorld =
      NULL;  // Make sure to get into the habit of having your pointers point to
             // NULL when they're not pointing to anything.

  // destroy window
  SDL_DestroyWindow(gWindow);
  gWindow = NULL;

  // quit sdl subsystems
  SDL_Quit();

  /* Why are we bothering to free resources from a program that is going to
finish terminating anyway? Aren't the resources just going to be deallocated
when the program returns?  The answer is: I don't know. Depending on your OS, it
may or may not. Welcome to the world of undefined behavior in C++.  */
}

int main() {
  // starts up sdl and creates a window
  //   bool init();
  if (!init()) {
    printf("Failed to initialize!\n");
  } else {
    // loads media
    //   bool loadMedia();
    if (!loadMedia()) {
      printf("Failed to load media!\n");
    } else {
      // apply the image
      SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);
      //  If we only had a front buffer, we would be able to see the frame as
      //  things are being drawn to it which means we would see unfinished
      //  frames. So what we do is draw everything to the back buffer first and
      //  once we're done we swap the back and front buffer so now the user can
      //  see the finished frame.

      // update the surface
      SDL_UpdateWindowSurface(gWindow);
      // when you draw to the screen, you are not typically drawing to the image
      // on the screen you see. By default, most rendering systems out there are
      // double buffered. These two buffers are the front and back buffer.

      // hack to keep the window open
      SDL_Event e;
      bool quit = false;
      while (quit == false) {
        while (SDL_PollEvent(&e)) {
          if (e.type == SDL_QUIT) {
            quit = true;
          }
        }
      }
    }
  }
  close();
  return 0;
}