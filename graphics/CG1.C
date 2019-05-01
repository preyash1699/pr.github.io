#include<stdio.h>
#include<graphics.h>

void draw(int x, int y)
{
	circle(100+x,100+y,50);
	circle(75+x,80+y,10);
	circle(120+x,80+y,10);
	line(100+x,90+y,100+x,115+y);
	arc(100+x,115+y,180,0,20);

}


void main()
{
	int i;
	int gd, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	for(i=0;i<=600;i++)
	{
		draw(i,0);
		delay(10);
		cleardevice();
	}
	for(i=600;i>=0;i--)
	{
		draw(i,0);
		delay(10);
		cleardevice();
	}
	getch();
	closegraph();

}