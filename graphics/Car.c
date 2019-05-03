#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    rectangle(100,200,400,200);
    circle(150,200,20);
    circle(350,200,20);
    getch();
	closegraph();
}


/*
---------------------------------------------------------------
|
|
|
|       ---------------------
|       |                   |
|       |                   |
|       |---(  )-----(  )---|
|
|
|
|
|

*/