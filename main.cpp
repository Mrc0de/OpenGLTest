#include <iostream>
#include <SDL.h>
using namespace std;

int main(int argc, char** argv) {
    cout<<"*** openGLTest Started ***"<<endl;
    // Go
     SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Delay(1000);

    SDL_Quit();
    // Stop
    cout<<"*** openGLTest Finished ***"<<endl;
    return 0;
}

