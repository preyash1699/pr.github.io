#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void drawpolygon(int ep[][10], int n)
{
	int i, x0, y0, x1, y1;
	for(i=0;i<n;i++)
	{
		x0 = 320 + ep[i][0];
		y0 = 240 - ep[i][1];
		x1 = 320 + ep[i+1][0];
		y1 = 240 - ep[i+1][1];
		line(x0,y0,x1,y1);
		delay(100);
	}
}


void translate(int ep[][10], int n, int tx, int ty)
{
	int b[10][10], i;
	line(320, 0, 320, 640);
	line(0, 240, 640, 240);
	for(i=0;i<=n;i++)
	{
		b[i][0] = ep[i][0] + tx;
		b[i][1] = ep[i][1] + ty;
	}
	drawpolygon(b,n);
}



void scale(int ep[][10], int n, int tx, int ty)
{
	int b[10][10], i;
	line(320, 0, 320, 640);
	line(0, 240, 640, 240);
	for(i=0;i<=n;i++)
	{
		b[i][0] = ep[i][0] * tx;
		b[i][1] = ep[i][1] * ty;
	}
	drawpolygon(b,n);

}



void main()
{
	int endpoints[10][10], i, tx, ty, n;
	int gd, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("Enter no of End points: ");
	scanf("%d",&n);
	printf("Enter End points: \n");
	for(i=0; i<n ;i++)
	{
		scanf("%d %d",&endpoints[i][0],&endpoints[i][1]);
	}
	endpoints[n][0]=endpoints[0][0];
	endpoints[n][1]=endpoints[0][1];
	printf("Enter tx ty: ");
	scanf("%d %d",&tx,&ty);
	clrscr();
	line(320, 0, 320, 640);
	line(0, 240, 640, 240);
	drawpolygon(endpoints, n);
	translate(endpoints, n, tx, ty);
	scale(endpoints, n, 2, 2);
	getch();
	closegraph();
}