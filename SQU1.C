#include<stdio.h>
#include<conio.h>

main()

{
	int x,y,z;
	clrscr();
	printf("X = ",x);
	scanf("%d",&x);
	printf("Y = ",y);
	scanf("%d",&y);
	z=x*x+2*x*y+y*y;
	printf("Z = %d",z);
	getch();
}