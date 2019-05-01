#include<stdio.h>
#include<conio.h>
#include<graphics.h>

#define bc WHITE
#define fc1 RED
#define ac RED
#define fc2 GREEN

void boundaryfill(int x, int y)
{
	if(getpixel(x, y)!=bc && getpixel(x, y)!=fc1)
	{
		putpixel(x,y,fc1);
		delay(5);
		boundaryfill(x,y-1);
		boundaryfill(x+1, y-1);
		boundaryfill(x+1, y);
		boundaryfill(x+1, y+1);
		boundaryfill(x-1, y-1);
		boundaryfill(x, y+1);
		boundaryfill(x,y);
		boundaryfill(x-1, y+1);
	}
}

void main()
{
	int x,y;
	int gd, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	x = y = 125;
	printf("Seed pixel is: %d %d",x,y);
	printf("Rectangle has coordinates (100, 100) (150, 150)");
	rectangle(100,100,150,150);
	boundaryfill(x,y);
	getch();
	closegraph();
}