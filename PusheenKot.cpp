#include <SDL3/SDL.h>
#include <iostream>
#include <cmath>>

void drawCos(SDL_Renderer* renderer,
    int width, int height,
    float ampl, float frequency,
    float phase, float tilt,
    float startX, float startY)
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    for (int i = 0; i < width - 1; ++i) {
        float x1 = startX + i;
        float x2 = startX + i + 1;

        float y1 = startY + ampl * std::cos(frequency * x1 + phase) + tilt * (x1 - startX);
        float y2 = startY + ampl * std::cos(frequency * x2 + phase) + tilt * (x2 - startX);

        SDL_RenderLine(renderer, (int)x1, (int)y1, (int)x2, (int)y2);
    }
}

int main() {

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Myau be", 800, 600, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); 

    //body---points----
    SDL_Point p1 = { 272, 102 };
    SDL_Point p2 = { 205, 345 };
    SDL_Point p3 = { 206, 386 };
    SDL_Point p4 = { 213, 430 };
    SDL_Point p5 = { 237, 473 };
    SDL_Point p6 = { 250, 492 };
    SDL_Point p7 = { 300, 518 };
    SDL_Point p8 = { 302, 543 };
    SDL_Point p9 = { 322, 545 };
    SDL_Point p10 = { 334, 524 };
    SDL_Point p11 = { 407, 531 };
    SDL_Point p12 = { 480, 517 };
    SDL_Point p13 = { 486, 531 };
    SDL_Point p14 = { 502, 545 };
    SDL_Point p15 = { 516, 534 };
    SDL_Point p16 = { 508, 508 };
    SDL_Point p17 = { 527, 486 };
    SDL_Point p18 = { 550, 430 };
    SDL_Point p19 = { 565, 370 };
    SDL_Point p20 = { 553, 288 };
    SDL_Point p21 = { 517, 203 };
    SDL_Point p22 = { 490, 150 };
    SDL_Point p23 = { 450, 110 };
    SDL_Point p24 = { 413, 75 };
    SDL_Point p25 = { 395, 85 };
    SDL_Point p26 = { 385, 115 };
    SDL_Point p27 = { 320, 125 };
    SDL_Point p28 = { 288, 95 };
    SDL_Point p29 = { 272, 102 };
    //glasses---points---
    SDL_Point p30 = { 290, 153 };
    SDL_Point p32 = { 297, 180 };
    SDL_Point p33 = { 320, 195 };
    SDL_Point p34 = { 347, 190 };
    SDL_Point p35 = { 360, 170 };
    SDL_Point p36 = { 368, 153 };
    SDL_Point p37 = { 373, 140 };
    SDL_Point p38 = { 387, 138 };
    SDL_Point p39 = { 392, 154 };
    SDL_Point p40 = { 403, 167 };
    SDL_Point p41 = { 418, 176 };
    SDL_Point p42 = { 443, 175 };
    SDL_Point p43 = { 454, 162 };
    SDL_Point p44 = { 456, 144 };
    SDL_Point p45 = { 451, 126 };

    //body
    SDL_RenderLine(renderer, p1.x, p1.y, p2.x, p2.y);
    SDL_RenderLine(renderer, p2.x, p2.y, p3.x, p3.y);
    SDL_RenderLine(renderer, p3.x, p3.y, p4.x, p4.y);
    SDL_RenderLine(renderer, p4.x, p4.y, p5.x, p5.y);
    SDL_RenderLine(renderer, p5.x, p5.y, p6.x, p6.y);
    SDL_RenderLine(renderer, p6.x, p6.y, p7.x, p7.y);
    SDL_RenderLine(renderer, p7.x, p7.y, p8.x, p8.y);
    SDL_RenderLine(renderer, p8.x, p8.y, p9.x, p9.y);
    SDL_RenderLine(renderer, p9.x, p9.y, p10.x, p10.y);
    SDL_RenderLine(renderer, p10.x, p10.y, p11.x, p11.y);
    SDL_RenderLine(renderer, p11.x, p11.y, p12.x, p12.y);
    SDL_RenderLine(renderer, p12.x, p12.y, p13.x, p13.y);
    SDL_RenderLine(renderer, p13.x, p13.y, p14.x, p14.y);
    SDL_RenderLine(renderer, p14.x, p14.y, p15.x, p15.y);
    SDL_RenderLine(renderer, p15.x, p15.y, p16.x, p16.y);
    SDL_RenderLine(renderer, p16.x, p16.y, p17.x, p17.y);
    SDL_RenderLine(renderer, p17.x, p17.y, p18.x, p18.y);
    SDL_RenderLine(renderer, p18.x, p18.y, p19.x, p19.y);
    SDL_RenderLine(renderer, p19.x, p19.y, p20.x, p20.y);
    SDL_RenderLine(renderer, p20.x, p20.y, p21.x, p21.y);
    SDL_RenderLine(renderer, p21.x, p21.y, p22.x, p22.y);
    SDL_RenderLine(renderer, p22.x, p22.y, p23.x, p23.y);
    SDL_RenderLine(renderer, p23.x, p23.y, p24.x, p24.y);
    SDL_RenderLine(renderer, p24.x, p24.y, p25.x, p25.y);
    SDL_RenderLine(renderer, p25.x, p25.y, p26.x, p26.y);
    SDL_RenderLine(renderer, p26.x, p26.y, p27.x, p27.y);
    SDL_RenderLine(renderer, p27.x, p27.y, p28.x, p28.y);

    //---glasses---below----
    SDL_RenderLine(renderer, p28.x, p28.y, p29.x, p29.y);
    SDL_RenderLine(renderer, p30.x, p30.y, p32.x, p32.y);
    SDL_RenderLine(renderer, p32.x, p32.y, p33.x, p33.y);
    SDL_RenderLine(renderer, p33.x, p33.y, p34.x, p34.y);
    SDL_RenderLine(renderer, p34.x, p34.y, p35.x, p35.y);
    SDL_RenderLine(renderer, p35.x, p35.y, p36.x, p36.y);
    SDL_RenderLine(renderer, p36.x, p36.y, p37.x, p37.y);
    SDL_RenderLine(renderer, p37.x, p37.y, p38.x, p38.y);
    SDL_RenderLine(renderer, p38.x, p38.y, p39.x, p39.y);
    SDL_RenderLine(renderer, p39.x, p39.y, p40.x, p40.y);
    SDL_RenderLine(renderer, p40.x, p40.y, p41.x, p41.y);
    SDL_RenderLine(renderer, p41.x, p41.y, p42.x, p42.y);
    SDL_RenderLine(renderer, p42.x, p42.y, p43.x, p43.y);
    SDL_RenderLine(renderer, p43.x, p43.y, p44.x, p44.y);
    SDL_RenderLine(renderer, p44.x, p44.y, p45.x, p45.y);
    SDL_RenderLine(renderer, p30.x, p30.y, p45.x, p45.y);

    drawCos(renderer, 100, 20, 50, 0.22f, 4.8f, 2, 120,290); //tail

    drawCos(renderer, 35, 25, 10, 0.20f, 98.8f, -0.3f, 367, 205); //mouth

    drawCos(renderer, 40, 25, -180, 0.05f, 42.14f, 5.3f, 512, 230); // left arm

    drawCos(renderer, 45, 25, 120, 0.05f, 31.1f, 2.8f, 250, 215); // right arm

    SDL_RenderPresent(renderer);

    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                running = false;
            }

        }


        SDL_Delay(10);
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

}