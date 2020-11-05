#include <stdio.h>
#include "raylib.h"

int main()
{

const int screenWidth = 204;
const int screenHeight = 254;
InitWindow(screenWidth, screenHeight, "80085!");


Image background2 = LoadImage("background2.png");
Texture2D background2tx = LoadTextureFromImage(background2);
UnloadImage(background2);


Image button1 = LoadImage("button1.png");
Texture2D button1tx = LoadTextureFromImage(button1);
UnloadImage(button1);
Image button2 = LoadImage("button2.png");
Texture2D button2tx = LoadTextureFromImage(button2);
UnloadImage(button2);
Image button3 = LoadImage("button3.png");
Texture2D button3tx = LoadTextureFromImage(button3);
UnloadImage(button3);
Image button4 = LoadImage("button4.png");
Texture2D button4tx = LoadTextureFromImage(button4);
UnloadImage(button4);
Image button5 = LoadImage("button5.png");
Texture2D button5tx = LoadTextureFromImage(button5);
UnloadImage(button5);
Image button6 = LoadImage("button6.png");
Texture2D button6tx = LoadTextureFromImage(button6);
UnloadImage(button6);
Image button7 = LoadImage("button7.png");
Texture2D button7tx = LoadTextureFromImage(button7);
UnloadImage(button7);
Image button8 = LoadImage("button8.png");
Texture2D button8tx = LoadTextureFromImage(button8);
UnloadImage(button8);
Image button9 = LoadImage("button9.png");
Texture2D button9tx = LoadTextureFromImage(button9);
UnloadImage(button9);
Image button0 = LoadImage("button0.png");
Texture2D button0tx = LoadTextureFromImage(button0);
UnloadImage(button0);

Image button10 = LoadImage("button10.png");
Texture2D button10tx = LoadTextureFromImage(button1);
UnloadImage(button10);
Image button11 = LoadImage("button11.png");
Texture2D button11tx = LoadTextureFromImage(button11);
UnloadImage(button11);
Image button12 = LoadImage("button12.png");
Texture2D button12tx = LoadTextureFromImage(button12);
UnloadImage(button12);
Image button13 = LoadImage("button13.png");
Texture2D button13tx = LoadTextureFromImage(button13);
UnloadImage(button13);
Image button14 = LoadImage("button14.png");
Texture2D button14tx = LoadTextureFromImage(button14);
UnloadImage(button14);
Image button15 = LoadImage("button15.png");
Texture2D button15tx = LoadTextureFromImage(button15);
UnloadImage(button15);










while (!WindowShouldClose())
{

    BeginDrawing();
    
    ClearBackground(BLACK);
    DrawTexture(background2tx,0,0,WHITE);


    DrawTexture(button1tx,2,202,WHITE);
    DrawTexture(button2tx,52,202,WHITE);
    DrawTexture(button3tx,102,202,WHITE);
    DrawTexture(button4tx,2,152,WHITE);
    DrawTexture(button5tx,52,152,WHITE);
    DrawTexture(button6tx,102,152,WHITE);
    DrawTexture(button7tx,2,102,WHITE);
    DrawTexture(button8tx,52,102,WHITE);
    DrawTexture(button9tx,102,102,WHITE);
    DrawTexture(button0tx,152,202,WHITE);

    DrawTexture(button10tx,152,152,WHITE);
    DrawTexture(button11tx,152,102,WHITE);
    DrawTexture(button12tx,2,52,WHITE);
    DrawTexture(button13tx,52,52,WHITE);
    DrawTexture(button14tx,102,52,WHITE);
    DrawTexture(button15tx,152,52,WHITE);





    EndDrawing();
}






return 0;
}