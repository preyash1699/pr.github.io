#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int i,x1,y1,x2,y2,dx,dy,step,xk,yk,xinc,yinc;
	int gd, gm;
	printf("Enter End Point Corrdinates: ");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	xk = x1;
	yk = y1;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	dx = x2-x1;
	dy = y2-y1;
	if(abs(dx)>=abs(dy))
	{
		step = abs(dx);
	}
	else
	{
		step = abs(dy);
	}
	xinc = dx/step;
	yinc = dy/step;
	for(i = 0;i < 5; i++)
	{
	do
	{
		putpixel(xk,yk,15);
		xk = xk + xinc;
		yk = yk + yinc;
		delay(10);
	}while(xk!=x2+i && yk!=y2);
	xk = x1 + i;
	yk = y1;
	}
	getch();
	closegraph();

}