#include "raylib.h"
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int widht = 1200, height = 1000;

    int timer = 0;
    int counter = 0;
    int fps = 60;

    int ballx1 = (rand() %8 + 4 ) * 50 + 25 , bally1 = (rand() %8 + 4 ) * 50 + 25 ;
    int ballx2 = (rand() %8 + 4 ) * 50 + 25 , bally2 = (rand() %8 + 4 ) * 50 + 25 ;
    int ballx3 = (rand() %8 + 4 ) * 50 + 25 , bally3 = (rand() %8 + 4 ) * 50 + 25 ;
    int ballx4 = (rand() %8 + 4 ) * 50 + 25 , bally4 = (rand() %8 + 4 ) * 50 + 25 ;
    int ballx5 = (rand() %8 + 4 ) * 50 + 25 , bally5 = (rand() %8 + 4 ) * 50 + 25 ;
    int ballx6 = (rand() %8 + 4 ) * 50 + 25 , bally6 = (rand() %8 + 4 ) * 50 + 25 ;

    //the chooser button x and y coordinates
    int buttonx = 200 , buttony = 200;


    InitWindow(widht,height,"candy crush.");
    SetTargetFPS(fps);

    // checks that if window is closed
    while(!WindowShouldClose()){

        BeginDrawing();
        ClearBackground(WHITE);



        //DRAWÝNG THE AREA

        //all area
        DrawRectangleLines(200, 200, 600, 600, RED);


        // horizontal lines (yatay)

        DrawRectangleLines(200,200,600,50,RED);
        DrawRectangleLines(200,200,600,100,RED);
        DrawRectangleLines(200,200,600,150,RED);
        DrawRectangleLines(200,200,600,200,RED);
        DrawRectangleLines(200,200,600,250,RED);
        DrawRectangleLines(200,200,600,300,RED);
        DrawRectangleLines(200,200,600,350,RED);
        DrawRectangleLines(200,200,600,400,RED);
        DrawRectangleLines(200,200,600,450,RED);
        DrawRectangleLines(200,200,600,500,RED);
        DrawRectangleLines(200,200,600,550,RED);
        DrawRectangleLines(200,200,600,600,RED);


        // vertical lines (dikey)

        DrawRectangleLines(200,200,50,600,RED);
        DrawRectangleLines(200,200,100,600,RED);
        DrawRectangleLines(200,200,150,600,RED);
        DrawRectangleLines(200,200,200,600,RED);
        DrawRectangleLines(200,200,250,600,RED);
        DrawRectangleLines(200,200,300,600,RED);
        DrawRectangleLines(200,200,350,600,RED);
        DrawRectangleLines(200,200,400,600,RED);
        DrawRectangleLines(200,200,450,600,RED);
        DrawRectangleLines(200,200,500,600,RED);
        DrawRectangleLines(200,200,550,600,RED);
        DrawRectangleLines(200,200,600,600,RED);


        // THE BUTTON
        DrawRectangleLines(buttonx,buttony,50,50,BLACK);


        //setting a timer
        counter++;
        timer = counter/fps;
        DrawText(TextFormat("TIME : %d",timer),20,20,20,BLACK);





        //MOVING THE BUTTON



            //control buttons
        if (IsKeyPressed(KEY_RIGHT )){

            buttonx+=50;

            }
        if (IsKeyPressed(KEY_LEFT )){

            buttonx-=50;

            }
        if (IsKeyPressed(KEY_UP )){

            buttony-=50;

            }
        if (IsKeyPressed(KEY_DOWN )){

            buttony+=50;

            }
            // setting the boundries
        if (buttonx<200)
            buttonx = 200 ;

        if (buttonx>750)
            buttonx = 750;

        if (buttony<200)
            buttony = 200 ;

        if (buttony>750)
            buttony = 750 ;


            //DRAWÝNG THE CANDYS

            DrawCircle(ballx1,bally1,20,YELLOW);
            DrawCircle(ballx2,bally2,20,RED);
            DrawCircle(ballx3,bally3,20,ORANGE);
            DrawCircle(ballx4,bally4,20,GREEN);
            DrawCircle(ballx5,bally5,20,BLUE);
            DrawCircle(ballx6,bally6,20,PURPLE);








        EndDrawing();



    }


    CloseWindow();


    return 0;
}



