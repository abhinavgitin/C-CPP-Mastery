# C-CPP-Mastery
This repo will contain all the C and Cpp Programs that I am practising or practising to build something.
I have also included a donut.c that will make a graphical donut animation using the sdl library and yes it works well :)

### How to run the [donut.c](src/c/donut.c) file 
1. First you need to install the sdl library on your system, you can do this by running the following command in your terminal:

   - For UCRT64: `pacman -S mingw-w64-ucrt-x86_64-SDL2`
   - For macOS: `brew install sdl2`
   - For Debian/Ubuntu: `sudo apt-get install libsdl2-dev`
   - For bash shell: `sudo yum install SDL2-devel`
   - For Arch Linux: `sudo pacman -S sdl2`

2. After installing the sdl library, you can compile the donut.c file using the following command:
    - `gcc src\donut.c -o donut -lSDL2`
3. Finally, you can run the compiled program using the following command:
    - `./donut`

Coded and practised with ❤️