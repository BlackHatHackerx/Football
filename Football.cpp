#include <iostream>
#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<winuser.h>
using namespace std;



//First I need to make a board,or a window with borders, or a map sort of for the game. For that, i define the function of a board
void MakeBoard()
{initwindow(500,800,"PACMAN");



rectangle(50,50,450,750);
 
rectangle(200,0,300,50);
rectangle(200,700,300,750);


line(50,400,450,400);
putpixel(250,400,255,255,255);
circle(250,400,50);
setfillstyle( XHATCH_FILL,WHITE);
floodfill(202,2,WHITE);
floodfill(202,702,WHITE);
delay(1000);

}
void DrawPlayer(int x,int y);



int main()
{
	
int x=100;int y=100;
MakeBoard();
while(GetAsyncKeyState('A')==false)
{


DrawPlayer(x,y);


if(GetAsyncKeyState(VK_RIGHT))
x+=10;

else if(GetAsyncKeyState(VK_LEFT))
x-=10;

else if(GetAsyncKeyState(VK_DOWN))
y+=10;

else if(GetAsyncKeyState(VK_UP))
y-=10;
}
return 0;
}


void DrawPlayer(int x,int y)
{putpixel( 0 + x,0 + y,0,0,0 );
putpixel( 1 + x,0 + y,0,0,0 );
putpixel( 2 + x,0 + y,0,0,0 );
putpixel( 3 + x,0 + y,0,0,0 );
putpixel( 4 + x,0 + y,0,0,0 );
putpixel( 5 + x,0 + y,0,0,0 );
putpixel( 6 + x,0 + y,0,0,0 );
putpixel( 7 + x,0 + y,0,0,0 );
putpixel( 8 + x,0 + y,0,0,0 );
putpixel( 9 + x,0 + y,0,0,0 );
putpixel( 10 + x,0 + y,0,0,0 );
putpixel( 11 + x,0 + y,0,0,0 );
putpixel( 12 + x,0 + y,0,0,0 );
putpixel( 13 + x,0 + y,0,0,0 );
putpixel( 14 + x,0 + y,0,0,0 );
putpixel( 15 + x,0 + y,0,0,0 );
putpixel( 16 + x,0 + y,0,0,0 );
putpixel( 17 + x,0 + y,0,0,0 );
putpixel( 18 + x,0 + y,0,0,0 );
putpixel( 19 + x,0 + y,0,0,0 );
putpixel( 20 + x,0 + y,0,0,0 );
putpixel( 21 + x,0 + y,0,0,0 );
putpixel( 22 + x,0 + y,0,0,0 );
putpixel( 23 + x,0 + y,0,0,0 );
putpixel( 24 + x,0 + y,0,0,0 );
putpixel( 25 + x,0 + y,0,0,0 );
putpixel( 26 + x,0 + y,0,0,0 );
putpixel( 27 + x,0 + y,0,0,0 );
putpixel( 28 + x,0 + y,0,0,0 );
putpixel( 29 + x,0 + y,0,0,0 );
putpixel( 0 + x,1 + y,0,0,0 );
putpixel( 1 + x,1 + y,0,0,0 );
putpixel( 2 + x,1 + y,0,0,0 );
putpixel( 3 + x,1 + y,0,0,0 );
putpixel( 4 + x,1 + y,0,0,0 );
putpixel( 5 + x,1 + y,0,0,0 );
putpixel( 6 + x,1 + y,0,0,0 );
putpixel( 7 + x,1 + y,0,0,0 );
putpixel( 8 + x,1 + y,0,0,0 );
putpixel( 9 + x,1 + y,0,0,0 );
putpixel( 10 + x,1 + y,0,0,0 );
putpixel( 11 + x,1 + y,0,0,0 );
putpixel( 12 + x,1 + y,0,0,0 );
putpixel( 13 + x,1 + y,0,0,0 );
putpixel( 14 + x,1 + y,0,0,0 );
putpixel( 15 + x,1 + y,0,0,0 );
putpixel( 16 + x,1 + y,0,0,0 );
putpixel( 17 + x,1 + y,0,0,0 );
putpixel( 18 + x,1 + y,0,0,0 );
putpixel( 19 + x,1 + y,0,0,0 );
putpixel( 20 + x,1 + y,0,0,0 );
putpixel( 21 + x,1 + y,0,0,0 );
putpixel( 22 + x,1 + y,0,0,0 );
putpixel( 23 + x,1 + y,0,0,0 );
putpixel( 24 + x,1 + y,0,0,0 );
putpixel( 25 + x,1 + y,0,0,0 );
putpixel( 26 + x,1 + y,0,0,0 );
putpixel( 27 + x,1 + y,0,0,0 );
putpixel( 28 + x,1 + y,0,0,0 );
putpixel( 29 + x,1 + y,0,0,0 );
putpixel( 0 + x,2 + y,0,0,0 );
putpixel( 1 + x,2 + y,0,0,0 );
putpixel( 2 + x,2 + y,0,0,0 );
putpixel( 3 + x,2 + y,0,0,0 );
putpixel( 4 + x,2 + y,0,0,0 );
putpixel( 5 + x,2 + y,0,0,0 );
putpixel( 6 + x,2 + y,0,0,0 );
putpixel( 7 + x,2 + y,0,0,0 );
putpixel( 8 + x,2 + y,0,0,0 );
putpixel( 9 + x,2 + y,0,0,0 );
putpixel( 10 + x,2 + y,0,0,0 );
putpixel( 11 + x,2 + y,0,0,0 );
putpixel( 12 + x,2 + y,0,0,0 );
putpixel( 13 + x,2 + y,0,0,0 );
putpixel( 14 + x,2 + y,0,0,0 );
putpixel( 15 + x,2 + y,0,0,0 );
putpixel( 16 + x,2 + y,0,0,0 );
putpixel( 17 + x,2 + y,0,0,0 );
putpixel( 18 + x,2 + y,0,0,0 );
putpixel( 19 + x,2 + y,0,0,0 );
putpixel( 20 + x,2 + y,0,0,0 );
putpixel( 21 + x,2 + y,0,0,0 );
putpixel( 22 + x,2 + y,0,0,0 );
putpixel( 23 + x,2 + y,0,0,0 );
putpixel( 24 + x,2 + y,0,0,0 );
putpixel( 25 + x,2 + y,0,0,0 );
putpixel( 26 + x,2 + y,0,0,0 );
putpixel( 27 + x,2 + y,0,0,0 );
putpixel( 28 + x,2 + y,0,0,0 );
putpixel( 29 + x,2 + y,0,0,0 );
putpixel( 0 + x,3 + y,0,0,0 );
putpixel( 1 + x,3 + y,0,0,0 );
putpixel( 2 + x,3 + y,0,0,0 );
putpixel( 3 + x,3 + y,0,0,0 );
putpixel( 4 + x,3 + y,0,0,0 );
putpixel( 5 + x,3 + y,0,0,0 );
putpixel( 6 + x,3 + y,0,0,0 );
putpixel( 7 + x,3 + y,0,0,0 );
putpixel( 8 + x,3 + y,0,0,0 );
putpixel( 9 + x,3 + y,0,0,0 );
putpixel( 10 + x,3 + y,0,0,0 );
putpixel( 11 + x,3 + y,0,0,0 );
putpixel( 12 + x,3 + y,0,0,0 );
putpixel( 13 + x,3 + y,0,0,0 );
putpixel( 14 + x,3 + y,0,0,0 );
putpixel( 15 + x,3 + y,0,0,0 );
putpixel( 16 + x,3 + y,0,0,0 );
putpixel( 17 + x,3 + y,0,0,0 );
putpixel( 18 + x,3 + y,0,0,0 );
putpixel( 19 + x,3 + y,0,0,0 );
putpixel( 20 + x,3 + y,0,0,0 );
putpixel( 21 + x,3 + y,0,0,0 );
putpixel( 22 + x,3 + y,0,0,0 );
putpixel( 23 + x,3 + y,0,0,0 );
putpixel( 24 + x,3 + y,0,0,0 );
putpixel( 25 + x,3 + y,0,0,0 );
putpixel( 26 + x,3 + y,0,0,0 );
putpixel( 27 + x,3 + y,0,0,0 );
putpixel( 28 + x,3 + y,0,0,0 );
putpixel( 29 + x,3 + y,0,0,0 );
putpixel( 0 + x,4 + y,0,0,0 );
putpixel( 1 + x,4 + y,0,0,0 );
putpixel( 2 + x,4 + y,0,0,0 );
putpixel( 3 + x,4 + y,0,0,0 );
putpixel( 4 + x,4 + y,0,0,0 );
putpixel( 5 + x,4 + y,0,0,0 );
putpixel( 6 + x,4 + y,0,0,0 );
putpixel( 7 + x,4 + y,0,0,0 );
putpixel( 8 + x,4 + y,0,0,0 );
putpixel( 9 + x,4 + y,0,0,0 );
putpixel( 10 + x,4 + y,0,0,0 );
putpixel( 11 + x,4 + y,0,0,0 );
putpixel( 12 + x,4 + y,0,0,0 );
putpixel( 13 + x,4 + y,0,0,0 );
putpixel( 14 + x,4 + y,0,0,0 );
putpixel( 15 + x,4 + y,0,0,0 );
putpixel( 16 + x,4 + y,0,0,0 );
putpixel( 17 + x,4 + y,0,0,0 );
putpixel( 18 + x,4 + y,0,0,0 );
putpixel( 19 + x,4 + y,0,0,0 );
putpixel( 20 + x,4 + y,0,0,0 );
putpixel( 21 + x,4 + y,0,0,0 );
putpixel( 22 + x,4 + y,0,0,0 );
putpixel( 23 + x,4 + y,0,0,0 );
putpixel( 24 + x,4 + y,0,0,0 );
putpixel( 25 + x,4 + y,0,0,0 );
putpixel( 26 + x,4 + y,0,0,0 );
putpixel( 27 + x,4 + y,0,0,0 );
putpixel( 28 + x,4 + y,0,0,0 );
putpixel( 29 + x,4 + y,0,0,0 );
putpixel( 0 + x,5 + y,0,0,0 );
putpixel( 1 + x,5 + y,0,0,0 );
putpixel( 2 + x,5 + y,0,0,0 );
putpixel( 3 + x,5 + y,0,0,0 );
putpixel( 4 + x,5 + y,0,0,0 );
putpixel( 5 + x,5 + y,0,0,0 );
putpixel( 6 + x,5 + y,0,0,0 );
putpixel( 7 + x,5 + y,0,0,0 );
putpixel( 8 + x,5 + y,0,0,0 );
putpixel( 9 + x,5 + y,0,0,0 );
putpixel( 10 + x,5 + y,0,0,0 );
putpixel( 11 + x,5 + y,0,0,0 );
putpixel( 12 + x,5 + y,0,0,0 );
putpixel( 13 + x,5 + y,0,0,0 );
putpixel( 14 + x,5 + y,0,0,0 );
putpixel( 15 + x,5 + y,0,0,0 );
putpixel( 16 + x,5 + y,0,0,0 );
putpixel( 17 + x,5 + y,0,0,0 );
putpixel( 18 + x,5 + y,0,0,0 );
putpixel( 19 + x,5 + y,0,0,0 );
putpixel( 20 + x,5 + y,0,0,0 );
putpixel( 21 + x,5 + y,0,0,0 );
putpixel( 22 + x,5 + y,0,0,0 );
putpixel( 23 + x,5 + y,0,0,0 );
putpixel( 24 + x,5 + y,0,0,0 );
putpixel( 25 + x,5 + y,0,0,0 );
putpixel( 26 + x,5 + y,0,0,0 );
putpixel( 27 + x,5 + y,0,0,0 );
putpixel( 28 + x,5 + y,0,0,0 );
putpixel( 29 + x,5 + y,0,0,0 );
putpixel( 0 + x,6 + y,0,0,0 );
putpixel( 1 + x,6 + y,0,0,0 );
putpixel( 2 + x,6 + y,0,0,0 );
putpixel( 3 + x,6 + y,0,0,0 );
putpixel( 4 + x,6 + y,0,0,0 );
putpixel( 5 + x,6 + y,0,0,0 );
putpixel( 6 + x,6 + y,0,0,0 );
putpixel( 7 + x,6 + y,0,0,0 );
putpixel( 8 + x,6 + y,0,0,0 );
putpixel( 9 + x,6 + y,0,0,0 );
putpixel( 10 + x,6 + y,0,0,0 );
putpixel( 11 + x,6 + y,0,0,0 );
putpixel( 12 + x,6 + y,255,242,0 );
putpixel( 13 + x,6 + y,255,242,0 );
putpixel( 14 + x,6 + y,255,242,0 );
putpixel( 15 + x,6 + y,255,242,0 );
putpixel( 16 + x,6 + y,255,242,0 );
putpixel( 17 + x,6 + y,255,242,0 );
putpixel( 18 + x,6 + y,0,0,0 );
putpixel( 19 + x,6 + y,0,0,0 );
putpixel( 20 + x,6 + y,0,0,0 );
putpixel( 21 + x,6 + y,0,0,0 );
putpixel( 22 + x,6 + y,0,0,0 );
putpixel( 23 + x,6 + y,0,0,0 );
putpixel( 24 + x,6 + y,0,0,0 );
putpixel( 25 + x,6 + y,0,0,0 );
putpixel( 26 + x,6 + y,0,0,0 );
putpixel( 27 + x,6 + y,0,0,0 );
putpixel( 28 + x,6 + y,0,0,0 );
putpixel( 29 + x,6 + y,0,0,0 );
putpixel( 0 + x,7 + y,0,0,0 );
putpixel( 1 + x,7 + y,0,0,0 );
putpixel( 2 + x,7 + y,0,0,0 );
putpixel( 3 + x,7 + y,0,0,0 );
putpixel( 4 + x,7 + y,0,0,0 );
putpixel( 5 + x,7 + y,0,0,0 );
putpixel( 6 + x,7 + y,0,0,0 );
putpixel( 7 + x,7 + y,0,0,0 );
putpixel( 8 + x,7 + y,0,0,0 );
putpixel( 9 + x,7 + y,0,0,0 );
putpixel( 10 + x,7 + y,0,0,0 );
putpixel( 11 + x,7 + y,0,0,0 );
putpixel( 12 + x,7 + y,255,242,0 );
putpixel( 13 + x,7 + y,255,242,0 );
putpixel( 14 + x,7 + y,255,242,0 );
putpixel( 15 + x,7 + y,255,242,0 );
putpixel( 16 + x,7 + y,255,242,0 );
putpixel( 17 + x,7 + y,255,242,0 );
putpixel( 18 + x,7 + y,0,0,0 );
putpixel( 19 + x,7 + y,0,0,0 );
putpixel( 20 + x,7 + y,0,0,0 );
putpixel( 21 + x,7 + y,0,0,0 );
putpixel( 22 + x,7 + y,0,0,0 );
putpixel( 23 + x,7 + y,0,0,0 );
putpixel( 24 + x,7 + y,0,0,0 );
putpixel( 25 + x,7 + y,0,0,0 );
putpixel( 26 + x,7 + y,0,0,0 );
putpixel( 27 + x,7 + y,0,0,0 );
putpixel( 28 + x,7 + y,0,0,0 );
putpixel( 29 + x,7 + y,0,0,0 );
putpixel( 0 + x,8 + y,0,0,0 );
putpixel( 1 + x,8 + y,0,0,0 );
putpixel( 2 + x,8 + y,0,0,0 );
putpixel( 3 + x,8 + y,0,0,0 );
putpixel( 4 + x,8 + y,0,0,0 );
putpixel( 5 + x,8 + y,0,0,0 );
putpixel( 6 + x,8 + y,0,0,0 );
putpixel( 7 + x,8 + y,0,0,0 );
putpixel( 8 + x,8 + y,0,0,0 );
putpixel( 9 + x,8 + y,0,0,0 );
putpixel( 10 + x,8 + y,0,0,0 );
putpixel( 11 + x,8 + y,0,0,0 );
putpixel( 12 + x,8 + y,255,242,0 );
putpixel( 13 + x,8 + y,255,242,0 );
putpixel( 14 + x,8 + y,255,242,0 );
putpixel( 15 + x,8 + y,255,242,0 );
putpixel( 16 + x,8 + y,255,242,0 );
putpixel( 17 + x,8 + y,255,242,0 );
putpixel( 18 + x,8 + y,0,0,0 );
putpixel( 19 + x,8 + y,0,0,0 );
putpixel( 20 + x,8 + y,0,0,0 );
putpixel( 21 + x,8 + y,0,0,0 );
putpixel( 22 + x,8 + y,0,0,0 );
putpixel( 23 + x,8 + y,0,0,0 );
putpixel( 24 + x,8 + y,0,0,0 );
putpixel( 25 + x,8 + y,0,0,0 );
putpixel( 26 + x,8 + y,0,0,0 );
putpixel( 27 + x,8 + y,0,0,0 );
putpixel( 28 + x,8 + y,0,0,0 );
putpixel( 29 + x,8 + y,0,0,0 );
putpixel( 0 + x,9 + y,0,0,0 );
putpixel( 1 + x,9 + y,0,0,0 );
putpixel( 2 + x,9 + y,0,0,0 );
putpixel( 3 + x,9 + y,0,0,0 );
putpixel( 4 + x,9 + y,0,0,0 );
putpixel( 5 + x,9 + y,0,0,0 );
putpixel( 6 + x,9 + y,0,0,0 );
putpixel( 7 + x,9 + y,0,0,0 );
putpixel( 8 + x,9 + y,0,0,0 );
putpixel( 9 + x,9 + y,255,242,0 );
putpixel( 10 + x,9 + y,255,242,0 );
putpixel( 11 + x,9 + y,255,242,0 );
putpixel( 12 + x,9 + y,255,242,0 );
putpixel( 13 + x,9 + y,255,242,0 );
putpixel( 14 + x,9 + y,255,242,0 );
putpixel( 15 + x,9 + y,255,242,0 );
putpixel( 16 + x,9 + y,255,242,0 );
putpixel( 17 + x,9 + y,255,242,0 );
putpixel( 18 + x,9 + y,255,242,0 );
putpixel( 19 + x,9 + y,255,242,0 );
putpixel( 20 + x,9 + y,255,242,0 );
putpixel( 21 + x,9 + y,0,0,0 );
putpixel( 22 + x,9 + y,0,0,0 );
putpixel( 23 + x,9 + y,0,0,0 );
putpixel( 24 + x,9 + y,0,0,0 );
putpixel( 25 + x,9 + y,0,0,0 );
putpixel( 26 + x,9 + y,0,0,0 );
putpixel( 27 + x,9 + y,0,0,0 );
putpixel( 28 + x,9 + y,0,0,0 );
putpixel( 29 + x,9 + y,0,0,0 );
putpixel( 0 + x,10 + y,0,0,0 );
putpixel( 1 + x,10 + y,0,0,0 );
putpixel( 2 + x,10 + y,0,0,0 );
putpixel( 3 + x,10 + y,0,0,0 );
putpixel( 4 + x,10 + y,0,0,0 );
putpixel( 5 + x,10 + y,0,0,0 );
putpixel( 6 + x,10 + y,0,0,0 );
putpixel( 7 + x,10 + y,0,0,0 );
putpixel( 8 + x,10 + y,0,0,0 );
putpixel( 9 + x,10 + y,255,242,0 );
putpixel( 10 + x,10 + y,255,242,0 );
putpixel( 11 + x,10 + y,255,242,0 );
putpixel( 12 + x,10 + y,255,242,0 );
putpixel( 13 + x,10 + y,255,242,0 );
putpixel( 14 + x,10 + y,255,242,0 );
putpixel( 15 + x,10 + y,255,242,0 );
putpixel( 16 + x,10 + y,255,242,0 );
putpixel( 17 + x,10 + y,255,242,0 );
putpixel( 18 + x,10 + y,255,242,0 );
putpixel( 19 + x,10 + y,255,242,0 );
putpixel( 20 + x,10 + y,255,242,0 );
putpixel( 21 + x,10 + y,0,0,0 );
putpixel( 22 + x,10 + y,0,0,0 );
putpixel( 23 + x,10 + y,0,0,0 );
putpixel( 24 + x,10 + y,0,0,0 );
putpixel( 25 + x,10 + y,0,0,0 );
putpixel( 26 + x,10 + y,0,0,0 );
putpixel( 27 + x,10 + y,0,0,0 );
putpixel( 28 + x,10 + y,0,0,0 );
putpixel( 29 + x,10 + y,0,0,0 );
putpixel( 0 + x,11 + y,0,0,0 );
putpixel( 1 + x,11 + y,0,0,0 );
putpixel( 2 + x,11 + y,0,0,0 );
putpixel( 3 + x,11 + y,0,0,0 );
putpixel( 4 + x,11 + y,0,0,0 );
putpixel( 5 + x,11 + y,0,0,0 );
putpixel( 6 + x,11 + y,0,0,0 );
putpixel( 7 + x,11 + y,0,0,0 );
putpixel( 8 + x,11 + y,0,0,0 );
putpixel( 9 + x,11 + y,255,242,0 );
putpixel( 10 + x,11 + y,255,242,0 );
putpixel( 11 + x,11 + y,255,242,0 );
putpixel( 12 + x,11 + y,255,242,0 );
putpixel( 13 + x,11 + y,255,242,0 );
putpixel( 14 + x,11 + y,255,242,0 );
putpixel( 15 + x,11 + y,255,242,0 );
putpixel( 16 + x,11 + y,255,242,0 );
putpixel( 17 + x,11 + y,255,242,0 );
putpixel( 18 + x,11 + y,255,242,0 );
putpixel( 19 + x,11 + y,255,242,0 );
putpixel( 20 + x,11 + y,255,242,0 );
putpixel( 21 + x,11 + y,0,0,0 );
putpixel( 22 + x,11 + y,0,0,0 );
putpixel( 23 + x,11 + y,0,0,0 );
putpixel( 24 + x,11 + y,0,0,0 );
putpixel( 25 + x,11 + y,0,0,0 );
putpixel( 26 + x,11 + y,0,0,0 );
putpixel( 27 + x,11 + y,0,0,0 );
putpixel( 28 + x,11 + y,0,0,0 );
putpixel( 29 + x,11 + y,0,0,0 );
putpixel( 0 + x,12 + y,0,0,0 );
putpixel( 1 + x,12 + y,0,0,0 );
putpixel( 2 + x,12 + y,0,0,0 );
putpixel( 3 + x,12 + y,0,0,0 );
putpixel( 4 + x,12 + y,0,0,0 );
putpixel( 5 + x,12 + y,0,0,0 );
putpixel( 6 + x,12 + y,237,28,36 );
putpixel( 7 + x,12 + y,237,28,36 );
putpixel( 8 + x,12 + y,237,28,36 );
putpixel( 9 + x,12 + y,0,0,0 );
putpixel( 10 + x,12 + y,0,0,0 );
putpixel( 11 + x,12 + y,0,0,0 );
putpixel( 12 + x,12 + y,237,28,36 );
putpixel( 13 + x,12 + y,237,28,36 );
putpixel( 14 + x,12 + y,237,28,36 );
putpixel( 15 + x,12 + y,0,0,0 );
putpixel( 16 + x,12 + y,0,0,0 );
putpixel( 17 + x,12 + y,0,0,0 );
putpixel( 18 + x,12 + y,237,28,36 );
putpixel( 19 + x,12 + y,237,28,36 );
putpixel( 20 + x,12 + y,237,28,36 );
putpixel( 21 + x,12 + y,0,0,0 );
putpixel( 22 + x,12 + y,0,0,0 );
putpixel( 23 + x,12 + y,0,0,0 );
putpixel( 24 + x,12 + y,0,0,0 );
putpixel( 25 + x,12 + y,0,0,0 );
putpixel( 26 + x,12 + y,0,0,0 );
putpixel( 27 + x,12 + y,0,0,0 );
putpixel( 28 + x,12 + y,0,0,0 );
putpixel( 29 + x,12 + y,0,0,0 );
putpixel( 0 + x,13 + y,0,0,0 );
putpixel( 1 + x,13 + y,0,0,0 );
putpixel( 2 + x,13 + y,0,0,0 );
putpixel( 3 + x,13 + y,0,0,0 );
putpixel( 4 + x,13 + y,0,0,0 );
putpixel( 5 + x,13 + y,0,0,0 );
putpixel( 6 + x,13 + y,237,28,36 );
putpixel( 7 + x,13 + y,237,28,36 );
putpixel( 8 + x,13 + y,237,28,36 );
putpixel( 9 + x,13 + y,0,0,0 );
putpixel( 10 + x,13 + y,0,0,0 );
putpixel( 11 + x,13 + y,0,0,0 );
putpixel( 12 + x,13 + y,237,28,36 );
putpixel( 13 + x,13 + y,237,28,36 );
putpixel( 14 + x,13 + y,237,28,36 );
putpixel( 15 + x,13 + y,0,0,0 );
putpixel( 16 + x,13 + y,0,0,0 );
putpixel( 17 + x,13 + y,0,0,0 );
putpixel( 18 + x,13 + y,237,28,36 );
putpixel( 19 + x,13 + y,237,28,36 );
putpixel( 20 + x,13 + y,237,28,36 );
putpixel( 21 + x,13 + y,0,0,0 );
putpixel( 22 + x,13 + y,0,0,0 );
putpixel( 23 + x,13 + y,0,0,0 );
putpixel( 24 + x,13 + y,0,0,0 );
putpixel( 25 + x,13 + y,0,0,0 );
putpixel( 26 + x,13 + y,0,0,0 );
putpixel( 27 + x,13 + y,0,0,0 );
putpixel( 28 + x,13 + y,0,0,0 );
putpixel( 29 + x,13 + y,0,0,0 );
putpixel( 0 + x,14 + y,0,0,0 );
putpixel( 1 + x,14 + y,0,0,0 );
putpixel( 2 + x,14 + y,0,0,0 );
putpixel( 3 + x,14 + y,0,0,0 );
putpixel( 4 + x,14 + y,0,0,0 );
putpixel( 5 + x,14 + y,0,0,0 );
putpixel( 6 + x,14 + y,237,28,36 );
putpixel( 7 + x,14 + y,237,28,36 );
putpixel( 8 + x,14 + y,237,28,36 );
putpixel( 9 + x,14 + y,0,0,0 );
putpixel( 10 + x,14 + y,0,0,0 );
putpixel( 11 + x,14 + y,0,0,0 );
putpixel( 12 + x,14 + y,237,28,36 );
putpixel( 13 + x,14 + y,237,28,36 );
putpixel( 14 + x,14 + y,237,28,36 );
putpixel( 15 + x,14 + y,0,0,0 );
putpixel( 16 + x,14 + y,0,0,0 );
putpixel( 17 + x,14 + y,0,0,0 );
putpixel( 18 + x,14 + y,237,28,36 );
putpixel( 19 + x,14 + y,237,28,36 );
putpixel( 20 + x,14 + y,237,28,36 );
putpixel( 21 + x,14 + y,0,0,0 );
putpixel( 22 + x,14 + y,0,0,0 );
putpixel( 23 + x,14 + y,0,0,0 );
putpixel( 24 + x,14 + y,0,0,0 );
putpixel( 25 + x,14 + y,0,0,0 );
putpixel( 26 + x,14 + y,0,0,0 );
putpixel( 27 + x,14 + y,0,0,0 );
putpixel( 28 + x,14 + y,0,0,0 );
putpixel( 29 + x,14 + y,0,0,0 );
putpixel( 0 + x,15 + y,0,0,0 );
putpixel( 1 + x,15 + y,0,0,0 );
putpixel( 2 + x,15 + y,0,0,0 );
putpixel( 3 + x,15 + y,0,0,0 );
putpixel( 4 + x,15 + y,0,0,0 );
putpixel( 5 + x,15 + y,0,0,0 );
putpixel( 6 + x,15 + y,237,28,36 );
putpixel( 7 + x,15 + y,237,28,36 );
putpixel( 8 + x,15 + y,237,28,36 );
putpixel( 9 + x,15 + y,0,0,0 );
putpixel( 10 + x,15 + y,0,0,0 );
putpixel( 11 + x,15 + y,0,0,0 );
putpixel( 12 + x,15 + y,237,28,36 );
putpixel( 13 + x,15 + y,237,28,36 );
putpixel( 14 + x,15 + y,237,28,36 );
putpixel( 15 + x,15 + y,0,0,0 );
putpixel( 16 + x,15 + y,0,0,0 );
putpixel( 17 + x,15 + y,0,0,0 );
putpixel( 18 + x,15 + y,237,28,36 );
putpixel( 19 + x,15 + y,237,28,36 );
putpixel( 20 + x,15 + y,237,28,36 );
putpixel( 21 + x,15 + y,0,0,0 );
putpixel( 22 + x,15 + y,0,0,0 );
putpixel( 23 + x,15 + y,0,0,0 );
putpixel( 24 + x,15 + y,0,0,0 );
putpixel( 25 + x,15 + y,0,0,0 );
putpixel( 26 + x,15 + y,0,0,0 );
putpixel( 27 + x,15 + y,0,0,0 );
putpixel( 28 + x,15 + y,0,0,0 );
putpixel( 29 + x,15 + y,0,0,0 );
putpixel( 0 + x,16 + y,0,0,0 );
putpixel( 1 + x,16 + y,0,0,0 );
putpixel( 2 + x,16 + y,0,0,0 );
putpixel( 3 + x,16 + y,0,0,0 );
putpixel( 4 + x,16 + y,0,0,0 );
putpixel( 5 + x,16 + y,0,0,0 );
putpixel( 6 + x,16 + y,237,28,36 );
putpixel( 7 + x,16 + y,237,28,36 );
putpixel( 8 + x,16 + y,237,28,36 );
putpixel( 9 + x,16 + y,0,0,0 );
putpixel( 10 + x,16 + y,0,0,0 );
putpixel( 11 + x,16 + y,0,0,0 );
putpixel( 12 + x,16 + y,237,28,36 );
putpixel( 13 + x,16 + y,237,28,36 );
putpixel( 14 + x,16 + y,237,28,36 );
putpixel( 15 + x,16 + y,0,0,0 );
putpixel( 16 + x,16 + y,0,0,0 );
putpixel( 17 + x,16 + y,0,0,0 );
putpixel( 18 + x,16 + y,237,28,36 );
putpixel( 19 + x,16 + y,237,28,36 );
putpixel( 20 + x,16 + y,237,28,36 );
putpixel( 21 + x,16 + y,0,0,0 );
putpixel( 22 + x,16 + y,0,0,0 );
putpixel( 23 + x,16 + y,0,0,0 );
putpixel( 24 + x,16 + y,0,0,0 );
putpixel( 25 + x,16 + y,0,0,0 );
putpixel( 26 + x,16 + y,0,0,0 );
putpixel( 27 + x,16 + y,0,0,0 );
putpixel( 28 + x,16 + y,0,0,0 );
putpixel( 29 + x,16 + y,0,0,0 );
putpixel( 0 + x,17 + y,0,0,0 );
putpixel( 1 + x,17 + y,0,0,0 );
putpixel( 2 + x,17 + y,0,0,0 );
putpixel( 3 + x,17 + y,0,0,0 );
putpixel( 4 + x,17 + y,0,0,0 );
putpixel( 5 + x,17 + y,0,0,0 );
putpixel( 6 + x,17 + y,237,28,36 );
putpixel( 7 + x,17 + y,237,28,36 );
putpixel( 8 + x,17 + y,237,28,36 );
putpixel( 9 + x,17 + y,0,0,0 );
putpixel( 10 + x,17 + y,0,0,0 );
putpixel( 11 + x,17 + y,0,0,0 );
putpixel( 12 + x,17 + y,237,28,36 );
putpixel( 13 + x,17 + y,237,28,36 );
putpixel( 14 + x,17 + y,237,28,36 );
putpixel( 15 + x,17 + y,0,0,0 );
putpixel( 16 + x,17 + y,0,0,0 );
putpixel( 17 + x,17 + y,0,0,0 );
putpixel( 18 + x,17 + y,237,28,36 );
putpixel( 19 + x,17 + y,237,28,36 );
putpixel( 20 + x,17 + y,237,28,36 );
putpixel( 21 + x,17 + y,0,0,0 );
putpixel( 22 + x,17 + y,0,0,0 );
putpixel( 23 + x,17 + y,0,0,0 );
putpixel( 24 + x,17 + y,0,0,0 );
putpixel( 25 + x,17 + y,0,0,0 );
putpixel( 26 + x,17 + y,0,0,0 );
putpixel( 27 + x,17 + y,0,0,0 );
putpixel( 28 + x,17 + y,0,0,0 );
putpixel( 29 + x,17 + y,0,0,0 );
putpixel( 0 + x,18 + y,0,0,0 );
putpixel( 1 + x,18 + y,0,0,0 );
putpixel( 2 + x,18 + y,0,0,0 );
putpixel( 3 + x,18 + y,0,0,0 );
putpixel( 4 + x,18 + y,0,0,0 );
putpixel( 5 + x,18 + y,0,0,0 );
putpixel( 6 + x,18 + y,237,28,36 );
putpixel( 7 + x,18 + y,237,28,36 );
putpixel( 8 + x,18 + y,237,28,36 );
putpixel( 9 + x,18 + y,0,0,0 );
putpixel( 10 + x,18 + y,0,0,0 );
putpixel( 11 + x,18 + y,0,0,0 );
putpixel( 12 + x,18 + y,237,28,36 );
putpixel( 13 + x,18 + y,237,28,36 );
putpixel( 14 + x,18 + y,237,28,36 );
putpixel( 15 + x,18 + y,0,0,0 );
putpixel( 16 + x,18 + y,0,0,0 );
putpixel( 17 + x,18 + y,0,0,0 );
putpixel( 18 + x,18 + y,237,28,36 );
putpixel( 19 + x,18 + y,237,28,36 );
putpixel( 20 + x,18 + y,237,28,36 );
putpixel( 21 + x,18 + y,0,0,0 );
putpixel( 22 + x,18 + y,0,0,0 );
putpixel( 23 + x,18 + y,0,0,0 );
putpixel( 24 + x,18 + y,0,0,0 );
putpixel( 25 + x,18 + y,0,0,0 );
putpixel( 26 + x,18 + y,0,0,0 );
putpixel( 27 + x,18 + y,0,0,0 );
putpixel( 28 + x,18 + y,0,0,0 );
putpixel( 29 + x,18 + y,0,0,0 );
putpixel( 0 + x,19 + y,0,0,0 );
putpixel( 1 + x,19 + y,0,0,0 );
putpixel( 2 + x,19 + y,0,0,0 );
putpixel( 3 + x,19 + y,0,0,0 );
putpixel( 4 + x,19 + y,0,0,0 );
putpixel( 5 + x,19 + y,0,0,0 );
putpixel( 6 + x,19 + y,237,28,36 );
putpixel( 7 + x,19 + y,237,28,36 );
putpixel( 8 + x,19 + y,237,28,36 );
putpixel( 9 + x,19 + y,0,0,0 );
putpixel( 10 + x,19 + y,0,0,0 );
putpixel( 11 + x,19 + y,0,0,0 );
putpixel( 12 + x,19 + y,237,28,36 );
putpixel( 13 + x,19 + y,237,28,36 );
putpixel( 14 + x,19 + y,237,28,36 );
putpixel( 15 + x,19 + y,0,0,0 );
putpixel( 16 + x,19 + y,0,0,0 );
putpixel( 17 + x,19 + y,0,0,0 );
putpixel( 18 + x,19 + y,237,28,36 );
putpixel( 19 + x,19 + y,237,28,36 );
putpixel( 20 + x,19 + y,237,28,36 );
putpixel( 21 + x,19 + y,0,0,0 );
putpixel( 22 + x,19 + y,0,0,0 );
putpixel( 23 + x,19 + y,0,0,0 );
putpixel( 24 + x,19 + y,0,0,0 );
putpixel( 25 + x,19 + y,0,0,0 );
putpixel( 26 + x,19 + y,0,0,0 );
putpixel( 27 + x,19 + y,0,0,0 );
putpixel( 28 + x,19 + y,0,0,0 );
putpixel( 29 + x,19 + y,0,0,0 );
putpixel( 0 + x,20 + y,0,0,0 );
putpixel( 1 + x,20 + y,0,0,0 );
putpixel( 2 + x,20 + y,0,0,0 );
putpixel( 3 + x,20 + y,0,0,0 );
putpixel( 4 + x,20 + y,0,0,0 );
putpixel( 5 + x,20 + y,0,0,0 );
putpixel( 6 + x,20 + y,237,28,36 );
putpixel( 7 + x,20 + y,237,28,36 );
putpixel( 8 + x,20 + y,237,28,36 );
putpixel( 9 + x,20 + y,0,0,0 );
putpixel( 10 + x,20 + y,0,0,0 );
putpixel( 11 + x,20 + y,0,0,0 );
putpixel( 12 + x,20 + y,237,28,36 );
putpixel( 13 + x,20 + y,237,28,36 );
putpixel( 14 + x,20 + y,237,28,36 );
putpixel( 15 + x,20 + y,0,0,0 );
putpixel( 16 + x,20 + y,0,0,0 );
putpixel( 17 + x,20 + y,0,0,0 );
putpixel( 18 + x,20 + y,237,28,36 );
putpixel( 19 + x,20 + y,237,28,36 );
putpixel( 20 + x,20 + y,237,28,36 );
putpixel( 21 + x,20 + y,0,0,0 );
putpixel( 22 + x,20 + y,0,0,0 );
putpixel( 23 + x,20 + y,0,0,0 );
putpixel( 24 + x,20 + y,0,0,0 );
putpixel( 25 + x,20 + y,0,0,0 );
putpixel( 26 + x,20 + y,0,0,0 );
putpixel( 27 + x,20 + y,0,0,0 );
putpixel( 28 + x,20 + y,0,0,0 );
putpixel( 29 + x,20 + y,0,0,0 );
putpixel( 0 + x,21 + y,0,0,0 );
putpixel( 1 + x,21 + y,0,0,0 );
putpixel( 2 + x,21 + y,0,0,0 );
putpixel( 3 + x,21 + y,0,0,0 );
putpixel( 4 + x,21 + y,0,0,0 );
putpixel( 5 + x,21 + y,0,0,0 );
putpixel( 6 + x,21 + y,237,28,36 );
putpixel( 7 + x,21 + y,237,28,36 );
putpixel( 8 + x,21 + y,237,28,36 );
putpixel( 9 + x,21 + y,0,0,0 );
putpixel( 10 + x,21 + y,0,0,0 );
putpixel( 11 + x,21 + y,0,0,0 );
putpixel( 12 + x,21 + y,237,28,36 );
putpixel( 13 + x,21 + y,237,28,36 );
putpixel( 14 + x,21 + y,237,28,36 );
putpixel( 15 + x,21 + y,0,0,0 );
putpixel( 16 + x,21 + y,0,0,0 );
putpixel( 17 + x,21 + y,0,0,0 );
putpixel( 18 + x,21 + y,237,28,36 );
putpixel( 19 + x,21 + y,237,28,36 );
putpixel( 20 + x,21 + y,237,28,36 );
putpixel( 21 + x,21 + y,0,0,0 );
putpixel( 22 + x,21 + y,0,0,0 );
putpixel( 23 + x,21 + y,0,0,0 );
putpixel( 24 + x,21 + y,0,0,0 );
putpixel( 25 + x,21 + y,0,0,0 );
putpixel( 26 + x,21 + y,0,0,0 );
putpixel( 27 + x,21 + y,0,0,0 );
putpixel( 28 + x,21 + y,0,0,0 );
putpixel( 29 + x,21 + y,0,0,0 );
putpixel( 0 + x,22 + y,0,0,0 );
putpixel( 1 + x,22 + y,0,0,0 );
putpixel( 2 + x,22 + y,0,0,0 );
putpixel( 3 + x,22 + y,0,0,0 );
putpixel( 4 + x,22 + y,0,0,0 );
putpixel( 5 + x,22 + y,0,0,0 );
putpixel( 6 + x,22 + y,237,28,36 );
putpixel( 7 + x,22 + y,237,28,36 );
putpixel( 8 + x,22 + y,237,28,36 );
putpixel( 9 + x,22 + y,0,0,0 );
putpixel( 10 + x,22 + y,0,0,0 );
putpixel( 11 + x,22 + y,0,0,0 );
putpixel( 12 + x,22 + y,237,28,36 );
putpixel( 13 + x,22 + y,237,28,36 );
putpixel( 14 + x,22 + y,237,28,36 );
putpixel( 15 + x,22 + y,0,0,0 );
putpixel( 16 + x,22 + y,0,0,0 );
putpixel( 17 + x,22 + y,0,0,0 );
putpixel( 18 + x,22 + y,237,28,36 );
putpixel( 19 + x,22 + y,237,28,36 );
putpixel( 20 + x,22 + y,237,28,36 );
putpixel( 21 + x,22 + y,0,0,0 );
putpixel( 22 + x,22 + y,0,0,0 );
putpixel( 23 + x,22 + y,0,0,0 );
putpixel( 24 + x,22 + y,0,0,0 );
putpixel( 25 + x,22 + y,0,0,0 );
putpixel( 26 + x,22 + y,0,0,0 );
putpixel( 27 + x,22 + y,0,0,0 );
putpixel( 28 + x,22 + y,0,0,0 );
putpixel( 29 + x,22 + y,0,0,0 );
putpixel( 0 + x,23 + y,0,0,0 );
putpixel( 1 + x,23 + y,0,0,0 );
putpixel( 2 + x,23 + y,0,0,0 );
putpixel( 3 + x,23 + y,0,0,0 );
putpixel( 4 + x,23 + y,0,0,0 );
putpixel( 5 + x,23 + y,0,0,0 );
putpixel( 6 + x,23 + y,237,28,36 );
putpixel( 7 + x,23 + y,237,28,36 );
putpixel( 8 + x,23 + y,237,28,36 );
putpixel( 9 + x,23 + y,0,0,0 );
putpixel( 10 + x,23 + y,0,0,0 );
putpixel( 11 + x,23 + y,0,0,0 );
putpixel( 12 + x,23 + y,237,28,36 );
putpixel( 13 + x,23 + y,237,28,36 );
putpixel( 14 + x,23 + y,237,28,36 );
putpixel( 15 + x,23 + y,0,0,0 );
putpixel( 16 + x,23 + y,0,0,0 );
putpixel( 17 + x,23 + y,0,0,0 );
putpixel( 18 + x,23 + y,237,28,36 );
putpixel( 19 + x,23 + y,237,28,36 );
putpixel( 20 + x,23 + y,237,28,36 );
putpixel( 21 + x,23 + y,0,0,0 );
putpixel( 22 + x,23 + y,0,0,0 );
putpixel( 23 + x,23 + y,0,0,0 );
putpixel( 24 + x,23 + y,0,0,0 );
putpixel( 25 + x,23 + y,0,0,0 );
putpixel( 26 + x,23 + y,0,0,0 );
putpixel( 27 + x,23 + y,0,0,0 );
putpixel( 28 + x,23 + y,0,0,0 );
putpixel( 29 + x,23 + y,0,0,0 );
putpixel( 0 + x,24 + y,0,0,0 );
putpixel( 1 + x,24 + y,0,0,0 );
putpixel( 2 + x,24 + y,0,0,0 );
putpixel( 3 + x,24 + y,0,0,0 );
putpixel( 4 + x,24 + y,0,0,0 );
putpixel( 5 + x,24 + y,0,0,0 );
putpixel( 6 + x,24 + y,0,0,0 );
putpixel( 7 + x,24 + y,0,0,0 );
putpixel( 8 + x,24 + y,0,0,0 );
putpixel( 9 + x,24 + y,0,0,0 );
putpixel( 10 + x,24 + y,0,0,0 );
putpixel( 11 + x,24 + y,0,0,0 );
putpixel( 12 + x,24 + y,0,0,0 );
putpixel( 13 + x,24 + y,0,0,0 );
putpixel( 14 + x,24 + y,0,0,0 );
putpixel( 15 + x,24 + y,0,0,0 );
putpixel( 16 + x,24 + y,0,0,0 );
putpixel( 17 + x,24 + y,0,0,0 );
putpixel( 18 + x,24 + y,0,0,0 );
putpixel( 19 + x,24 + y,0,0,0 );
putpixel( 20 + x,24 + y,0,0,0 );
putpixel( 21 + x,24 + y,0,0,0 );
putpixel( 22 + x,24 + y,0,0,0 );
putpixel( 23 + x,24 + y,0,0,0 );
putpixel( 24 + x,24 + y,0,0,0 );
putpixel( 25 + x,24 + y,0,0,0 );
putpixel( 26 + x,24 + y,0,0,0 );
putpixel( 27 + x,24 + y,0,0,0 );
putpixel( 28 + x,24 + y,0,0,0 );
putpixel( 29 + x,24 + y,0,0,0 );
putpixel( 0 + x,25 + y,0,0,0 );
putpixel( 1 + x,25 + y,0,0,0 );
putpixel( 2 + x,25 + y,0,0,0 );
putpixel( 3 + x,25 + y,0,0,0 );
putpixel( 4 + x,25 + y,0,0,0 );
putpixel( 5 + x,25 + y,0,0,0 );
putpixel( 6 + x,25 + y,0,0,0 );
putpixel( 7 + x,25 + y,0,0,0 );
putpixel( 8 + x,25 + y,0,0,0 );
putpixel( 9 + x,25 + y,0,0,0 );
putpixel( 10 + x,25 + y,0,0,0 );
putpixel( 11 + x,25 + y,0,0,0 );
putpixel( 12 + x,25 + y,0,0,0 );
putpixel( 13 + x,25 + y,0,0,0 );
putpixel( 14 + x,25 + y,0,0,0 );
putpixel( 15 + x,25 + y,0,0,0 );
putpixel( 16 + x,25 + y,0,0,0 );
putpixel( 17 + x,25 + y,0,0,0 );
putpixel( 18 + x,25 + y,0,0,0 );
putpixel( 19 + x,25 + y,0,0,0 );
putpixel( 20 + x,25 + y,0,0,0 );
putpixel( 21 + x,25 + y,0,0,0 );
putpixel( 22 + x,25 + y,0,0,0 );
putpixel( 23 + x,25 + y,0,0,0 );
putpixel( 24 + x,25 + y,0,0,0 );
putpixel( 25 + x,25 + y,0,0,0 );
putpixel( 26 + x,25 + y,0,0,0 );
putpixel( 27 + x,25 + y,0,0,0 );
putpixel( 28 + x,25 + y,0,0,0 );
putpixel( 29 + x,25 + y,0,0,0 );
putpixel( 0 + x,26 + y,0,0,0 );
putpixel( 1 + x,26 + y,0,0,0 );
putpixel( 2 + x,26 + y,0,0,0 );
putpixel( 3 + x,26 + y,0,0,0 );
putpixel( 4 + x,26 + y,0,0,0 );
putpixel( 5 + x,26 + y,0,0,0 );
putpixel( 6 + x,26 + y,0,0,0 );
putpixel( 7 + x,26 + y,0,0,0 );
putpixel( 8 + x,26 + y,0,0,0 );
putpixel( 9 + x,26 + y,0,0,0 );
putpixel( 10 + x,26 + y,0,0,0 );
putpixel( 11 + x,26 + y,0,0,0 );
putpixel( 12 + x,26 + y,0,0,0 );
putpixel( 13 + x,26 + y,0,0,0 );
putpixel( 14 + x,26 + y,0,0,0 );
putpixel( 15 + x,26 + y,0,0,0 );
putpixel( 16 + x,26 + y,0,0,0 );
putpixel( 17 + x,26 + y,0,0,0 );
putpixel( 18 + x,26 + y,0,0,0 );
putpixel( 19 + x,26 + y,0,0,0 );
putpixel( 20 + x,26 + y,0,0,0 );
putpixel( 21 + x,26 + y,0,0,0 );
putpixel( 22 + x,26 + y,0,0,0 );
putpixel( 23 + x,26 + y,0,0,0 );
putpixel( 24 + x,26 + y,0,0,0 );
putpixel( 25 + x,26 + y,0,0,0 );
putpixel( 26 + x,26 + y,0,0,0 );
putpixel( 27 + x,26 + y,0,0,0 );
putpixel( 28 + x,26 + y,0,0,0 );
putpixel( 29 + x,26 + y,0,0,0 );
putpixel( 0 + x,27 + y,0,0,0 );
putpixel( 1 + x,27 + y,0,0,0 );
putpixel( 2 + x,27 + y,0,0,0 );
putpixel( 3 + x,27 + y,0,0,0 );
putpixel( 4 + x,27 + y,0,0,0 );
putpixel( 5 + x,27 + y,0,0,0 );
putpixel( 6 + x,27 + y,0,0,0 );
putpixel( 7 + x,27 + y,0,0,0 );
putpixel( 8 + x,27 + y,0,0,0 );
putpixel( 9 + x,27 + y,0,0,0 );
putpixel( 10 + x,27 + y,0,0,0 );
putpixel( 11 + x,27 + y,0,0,0 );
putpixel( 12 + x,27 + y,0,0,0 );
putpixel( 13 + x,27 + y,0,0,0 );
putpixel( 14 + x,27 + y,0,0,0 );
putpixel( 15 + x,27 + y,0,0,0 );
putpixel( 16 + x,27 + y,0,0,0 );
putpixel( 17 + x,27 + y,0,0,0 );
putpixel( 18 + x,27 + y,0,0,0 );
putpixel( 19 + x,27 + y,0,0,0 );
putpixel( 20 + x,27 + y,0,0,0 );
putpixel( 21 + x,27 + y,0,0,0 );
putpixel( 22 + x,27 + y,0,0,0 );
putpixel( 23 + x,27 + y,0,0,0 );
putpixel( 24 + x,27 + y,0,0,0 );
putpixel( 25 + x,27 + y,0,0,0 );
putpixel( 26 + x,27 + y,0,0,0 );
putpixel( 27 + x,27 + y,0,0,0 );
putpixel( 28 + x,27 + y,0,0,0 );
putpixel( 29 + x,27 + y,0,0,0 );
putpixel( 0 + x,28 + y,0,0,0 );
putpixel( 1 + x,28 + y,0,0,0 );
putpixel( 2 + x,28 + y,0,0,0 );
putpixel( 3 + x,28 + y,0,0,0 );
putpixel( 4 + x,28 + y,0,0,0 );
putpixel( 5 + x,28 + y,0,0,0 );
putpixel( 6 + x,28 + y,0,0,0 );
putpixel( 7 + x,28 + y,0,0,0 );
putpixel( 8 + x,28 + y,0,0,0 );
putpixel( 9 + x,28 + y,0,0,0 );
putpixel( 10 + x,28 + y,0,0,0 );
putpixel( 11 + x,28 + y,0,0,0 );
putpixel( 12 + x,28 + y,0,0,0 );
putpixel( 13 + x,28 + y,0,0,0 );
putpixel( 14 + x,28 + y,0,0,0 );
putpixel( 15 + x,28 + y,0,0,0 );
putpixel( 16 + x,28 + y,0,0,0 );
putpixel( 17 + x,28 + y,0,0,0 );
putpixel( 18 + x,28 + y,0,0,0 );
putpixel( 19 + x,28 + y,0,0,0 );
putpixel( 20 + x,28 + y,0,0,0 );
putpixel( 21 + x,28 + y,0,0,0 );
putpixel( 22 + x,28 + y,0,0,0 );
putpixel( 23 + x,28 + y,0,0,0 );
putpixel( 24 + x,28 + y,0,0,0 );
putpixel( 25 + x,28 + y,0,0,0 );
putpixel( 26 + x,28 + y,0,0,0 );
putpixel( 27 + x,28 + y,0,0,0 );
putpixel( 28 + x,28 + y,0,0,0 );
putpixel( 29 + x,28 + y,0,0,0 );
putpixel( 0 + x,29 + y,0,0,0 );
putpixel( 1 + x,29 + y,0,0,0 );
putpixel( 2 + x,29 + y,0,0,0 );
putpixel( 3 + x,29 + y,0,0,0 );
putpixel( 4 + x,29 + y,0,0,0 );
putpixel( 5 + x,29 + y,0,0,0 );
putpixel( 6 + x,29 + y,0,0,0 );
putpixel( 7 + x,29 + y,0,0,0 );
putpixel( 8 + x,29 + y,0,0,0 );
putpixel( 9 + x,29 + y,0,0,0 );
putpixel( 10 + x,29 + y,0,0,0 );
putpixel( 11 + x,29 + y,0,0,0 );
putpixel( 12 + x,29 + y,0,0,0 );
putpixel( 13 + x,29 + y,0,0,0 );
putpixel( 14 + x,29 + y,0,0,0 );
putpixel( 15 + x,29 + y,0,0,0 );
putpixel( 16 + x,29 + y,0,0,0 );
putpixel( 17 + x,29 + y,0,0,0 );
putpixel( 18 + x,29 + y,0,0,0 );
putpixel( 19 + x,29 + y,0,0,0 );
putpixel( 20 + x,29 + y,0,0,0 );
putpixel( 21 + x,29 + y,0,0,0 );
putpixel( 22 + x,29 + y,0,0,0 );
putpixel( 23 + x,29 + y,0,0,0 );
putpixel( 24 + x,29 + y,0,0,0 );
putpixel( 25 + x,29 + y,0,0,0 );
putpixel( 26 + x,29 + y,0,0,0 );
putpixel( 27 + x,29 + y,0,0,0 );
putpixel( 28 + x,29 + y,0,0,0 );
putpixel( 29 + x,29 + y,0,0,0 );

}

