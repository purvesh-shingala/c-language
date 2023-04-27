#include<stdio.h>
#include<conio.h>

main()

{
float x,y,a;
clrscr();
printf("ENTER X = ");
scanf("%f",&x);

printf("ENTER Y =");
scanf("%f",&y);

a=x*x*x+y*y*y+3*x*x*y+3*x*y*y;

printf("A = %f",a);
getch();
}