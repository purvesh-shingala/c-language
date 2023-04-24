#include<stdio.h>
#include<conio.h>
main()
{
int x;
int y;
int ans,ans2,ans3,ans4,ans5;
clrscr();
x=10;
y=5;
ans=x+y+2*x*y-x-y;
ans2=x*x+2*x*y+y*y;
ans3=(x+y)*(2*x+y);
ans4=4*x*y+2*x+2*y;
ans5=(x+2*y)*(2*x+y)+x-y;
printf("x+y+2xy-x-y= %d",ans);
printf("\nx*x+2*x*y+y*y= %d",ans2);
printf("\n(x+y)*(2*x+y)= %d",ans3);
printf("\n4*x*y+2*x+2*y= %d",ans4);
printf("\n(x+2*y)*(2*x+y)+x-y= %d",ans5);
getch();

}