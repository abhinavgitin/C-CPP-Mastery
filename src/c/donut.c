#include <SDL2/SDL.h>
#include <math.h>

#define WIDTH 800
#define HEIGHT 600

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Donut", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    double angleX = 0, angleY = 0, lightX = 0.5, lightY = 1, lightZ = 1;
    int running = 1;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = 0;
        }
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        int radius = 150, centerX = WIDTH / 2, centerY = HEIGHT / 2;

        double cosX = cos(angleX), sinX = sin(angleX), cosY = cos(angleY), sinY = sin(angleY);

        for (int i = 0; i < 360; i += 5) {
            for (int j = 0; j < 360; j += 5) {
                double x = (radius + cos(j * M_PI / 180) * 40) * cos(i * M_PI / 180);
                double y = (radius + cos(j * M_PI / 180) * 40) * sin(i * M_PI / 180);
                double z = sin(j * M_PI / 180) * 40;

                double tempX = x * cosY - z * sinY;
                double tempZ = x * sinY + z * cosY;
                x = tempX; z = tempZ;

                double tempY = y * cosX - z * sinX;
                z = y * sinX + z * cosX;
                y = tempY;

                double dotProduct = lightX * x + lightY * y + lightZ * z;
                double magnitude = sqrt(x * x + y * y + z * z);
                double lightIntensity = fmax(0, dotProduct / (magnitude * sqrt(lightX * lightX + lightY * lightY + lightZ * lightZ)));

                int screenX = centerX + (int)x;
                int screenY = centerY - (int)y;
                int color = (int)(255 * lightIntensity);
                SDL_SetRenderDrawColor(renderer, color, color, (int)(255 * (1 - lightIntensity)), 255);
                SDL_Rect rect = {screenX, screenY, 4, 4};
                SDL_RenderFillRect(renderer, &rect);
            }
        }
        angleX += 0.03;
        angleY += 0.03;
        SDL_RenderPresent(renderer);
        SDL_Delay(20);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
