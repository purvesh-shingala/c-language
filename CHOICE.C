#include<stdio.h>
#include<conio.h>
main()
{
int choice,type,type1,type2;
clrscr();
printf("press 1 for english\n");
printf("hindi ke liye 2 dabaye\n");
printf("gujarati mate 3 dabavo\n");    d


printf("enter your choice:");
scanf("%d",&choice);

switch(choice)
{
    case 1:
	printf("press 1 for internet recharge\n");
	printf("press 2 for free data\n");
	printf("press 3 for topup recharge\n");

	printf("enter your choice:");
	scanf("%d",&type);

	switch(type)
	{
	   case 1: printf("you selected internet recharge");  break;
	   case 2: printf("you selected internet free data");  break;
	   case 3: printf("you selected internet topup recharge");  break;
	   default: printf("invalide choice");
	}
	break;

    case 2:
	printf("internet recharge ke liye 1 dabaye\n");
	printf("free data 2 dabnaye\n");
	printf("topup recharge ke liye 3 dabaye\n");

	printf("enter your choice:");
	scanf("%d",&type1);

	switch(type1)
	{
	   case 1: printf("apne internet recharge pasnd kiya he.");  break;
	   case 2: printf("apne free data pasnd kiya he");  break;
	   case 3: printf("apne topup recharge pasnd kiya he");  break;
	   default: printf("invalide choice");
	}
	break;

    case 3:
	printf("internet recharge mate 1 dabavo\n");
	printf("free data mate 2 dabavo\n");
	printf("tpoup recharge mate 3 dabavo\n");

	printf("enter your choice");
	scanf("%d",&			type2);

	switch(type2)
	{
	   case 1: printf("tame internet recharge karyu chhe");  break;
	   case 2: printf("tame free data kryu chhe ");  break;
	   case 3: printf("tame internet topup recharge karyu chhe");  break;
	   default: printf("invalide choice:");
	}
	 break;

}

getch();
}