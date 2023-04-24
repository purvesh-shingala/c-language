#include<stdio.h>
#include<conio.h>

main()

{
int b,h,area;
clrscr();
printf("enter base=");
scanf("%d",&b);

printf("enter hight=");
scanf("%d",&h);

area=0.5*(b*h);
printf("area of rectangle= %d",area);
getch();


}