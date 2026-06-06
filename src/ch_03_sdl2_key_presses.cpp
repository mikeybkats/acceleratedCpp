// Using SDL and standard IO
#include <SDL2/SDL.h>
#include <stdio.h>

#include <string>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

enum KeyPressSurfaces {
  KEY_PRESS_SURFACE_DEFAULT,
  KEY_PRESS_SURFACE_UP,
  KEY_PRESS_SURFACE_DOWN,
  KEY_PRESS_SURFACE_LEFT,
  KEY_PRESS_SURFACE_RIGHT,
  KEY_PRESS_SURFACE_TOTAL
};

SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;
SDL_Surface* gKeyPressSurfaces[KEY_PRESS_SURFACE_TOTAL] = {};
SDL_Surface* gCurrentSurface = NULL;

SDL_Surface* createColorSurface(Uint8 r, Uint8 g, Uint8 b) {
  SDL_Surface* surface =
      SDL_CreateRGBSurfaceWithFormat(0, SCREEN_WIDTH, SCREEN_HEIGHT, 32,
                                     SDL_PIXELFORMAT_RGBA32);
  if (surface != NULL) {
    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, r, g, b));
  }
  return surface;
}

bool init() {
  bool success = true;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    success = false;
  } else {
    gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                               SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (gWindow == NULL) {
      printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
      success = false;
    } else {
      gScreenSurface = SDL_GetWindowSurface(gWindow);
    }
  }

  return success;
}

SDL_Surface* loadSurface(const std::string& path) {
  SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str());

  if (loadedSurface == NULL) {
    printf("Unable to load image %s! SDL Error: %s\n", path.c_str(),
           SDL_GetError());
  }

  return loadedSurface;
}

bool loadMedia() {
  bool success = true;

  gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] =
      loadSurface("assets/press.bmp");
  gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] = loadSurface("assets/up.bmp");
  gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] =
      loadSurface("assets/down.bmp");
  gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] =
      loadSurface("assets/left.bmp");
  gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] =
      loadSurface("assets/right.bmp");

  // Fallback to colored surfaces when BMP assets are missing.
  if (gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] == NULL) {
    gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] =
        createColorSurface(0xC0, 0xC0, 0xC0);
  }
  if (gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] == NULL) {
    gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] =
        createColorSurface(0x00, 0xFF, 0x00);
  }
  if (gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] == NULL) {
    gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] =
        createColorSurface(0xFF, 0x00, 0x00);
  }
  if (gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] == NULL) {
    gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] =
        createColorSurface(0x00, 0x00, 0xFF);
  }
  if (gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] == NULL) {
    gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] =
        createColorSurface(0xFF, 0xFF, 0x00);
  }

  for (int i = 0; i < KEY_PRESS_SURFACE_TOTAL; ++i) {
    if (gKeyPressSurfaces[i] == NULL) {
      success = false;
    }
  }

  return success;
}

void close() {
  for (int i = 0; i < KEY_PRESS_SURFACE_TOTAL; ++i) {
    SDL_FreeSurface(gKeyPressSurfaces[i]);
    gKeyPressSurfaces[i] = NULL;
  }

  SDL_DestroyWindow(gWindow);
  gWindow = NULL;

  SDL_Quit();
}

int main(int argc, char* args[]) {
  if (!init()) {
    printf("Failed to initialize!\n");
  } else if (!loadMedia()) {
    printf("Failed to load media!\n");
  } else {
    gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

    bool quit = false;
    SDL_Event e;

    while (!quit) {
      while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
          quit = true;
        } else if (e.type == SDL_KEYDOWN) {
          switch (e.key.keysym.sym) {
            case SDLK_UP:
              gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];
              break;
            case SDLK_DOWN:
              gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];
              break;
            case SDLK_LEFT:
              gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];
              break;
            case SDLK_RIGHT:
              gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];
              break;
            default:
              gCurrentSurface =
                  gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];
              break;
          }
        }
      }

      SDL_BlitSurface(gCurrentSurface, NULL, gScreenSurface, NULL);
      SDL_UpdateWindowSurface(gWindow);
    }
  }

  close();
  return 0;
}
