#include <iostream>
#define GLEW_STATIC
#include <GL/glew.h>
#include <SDL.h>
#include <SDL_opengl.h>

using namespace std;

int main(int argc, char** argv) {
    cout<<"*** openGLTest Started ***"<<endl;
    // Go
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_Window* window = SDL_CreateWindow("OpenGL It Works...", 0, 0, 800, 600, SDL_WINDOW_OPENGL);
    //SDL_WINDOW_OPENGL - Create a window ready for OpenGL.
    //SDL_WINDOW_RESIZABLE - Create a resizable window.
    //SDL_WINDOW_FULLSCREEN - Create a fullscreen window.
    SDL_GLContext context = SDL_GL_CreateContext(window);
    glewExperimental = GL_TRUE;
    glewInit();
    GLuint vertexBuffer;
    glGenBuffers(1, &vertexBuffer);
    printf("%u\n", vertexBuffer);
    SDL_Event windowEvent;
    while (true) {
        if (SDL_PollEvent(&windowEvent)) { 
            if (windowEvent.type == SDL_QUIT) break;
            if (windowEvent.type == SDL_KEYUP && windowEvent.key.keysym.sym == SDLK_ESCAPE) break;
        }
        //SDL_GL_SwapWindow(window);
    }
    
    SDL_Delay(1000);
    SDL_GL_DeleteContext(context);
    SDL_Quit();
    // Stop
    cout<<"*** openGLTest Finished ***"<<endl;
    return 0;
}

