#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void draw(int xk, int yk, int x, int y)
{
	putpixel( x+xk, y+yk,15);
	putpixel( x-xk, y-yk,15);
	putpixel( x+xk, y-yk,15);
	putpixel( x-xk, y+yk,15);
	putpixel( y+yk, x+xk,15);
	putpixel( y-yk, x-xk,15);
	putpixel( y-yk, x+xk,15);
	putpixel( y+yk, x-xk,15);
}


void bresenem(int x, int y, int r)
{
	int xk=0,yk=r,pk=3-2*r;
	while(xk<=yk)
	{
		draw(xk,yk,x,y);
		xk = xk + 1;
		if(pk < 0)
		{
			pk = pk + 4*xk + 6;
		}
		else
		{
			yk = yk - 1;
			pk = pk + 4*(xk - yk) + 10;
		}
	}
}


void midpoint(int x, int y, int r)
{
	int pk=1-r, xk=0,yk=r;
	while(xk<=yk)
	{
		draw(xk,yk,x,y);
		xk = xk + 1;
		if(pk < 0)
		{
			pk = pk + 2*xk + 3;
		}
		else
		{
			yk = yk - 1;
			pk = pk + 2*(xk - yk) + 5;
		}
	}
}

void main()
{
	int x,y,k,r;
	int gd, gm;
	printf("Enter center and radius: ");
	scanf("%d %d %d",&x, &y, &r);
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	midpoint(x,y,r);
	bresenem(x+300,y+300,r);
	getch();
	closegraph();
}