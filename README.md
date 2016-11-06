# OpenGLTest
Refreshing on OpenGL in C++

# Details
Uses SDL2 Lib</br>
SDL2 is available at www.libsdl.org<br/>

# IDE Setup (NetBeans 8.1)
After Compiling and Installing SDL2:</br>
In Linker, Add /usr/local/lib to projects Runtime Search Directories<br/>
Add -lSDL2 -lSDL2main to the end of Linker Additional Options<br/>
Finally, Add /usr/local/include/SDL2 to your projects Include Directories.</br>
This allowed the first commit to run, successfully invoking SDL2.<br/>