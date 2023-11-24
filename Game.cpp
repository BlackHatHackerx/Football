#include <iostream>
#include<graphics.h>
#include<conio.h>
#include<windows.h>
using namespace std;
//First I need to make a board,or a window with borders, or a map sort of for the game. For that, i define the function of a board
void MakeBoard()
{initwindow(500,800,"PACMAN");


rectangle(50,50,450,750);
 
rectangle(200,0,300,50);
rectangle(200,700,300,750);


line(50,400,450,400);
putpixel(250,400,WHITE);
circle(250,400,50);
setfillstyle( XHATCH_FILL,WHITE);
floodfill(202,2,WHITE);
floodfill(202,702,WHITE);
delay(1000);
getch();

}



int main()
{
MakeBoard();



}


