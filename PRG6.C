//wap to input your percentage and display wheather it  is pass or fail
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();
	printf("\n enter your mark:");
	scanf("%d",&x);

	if(x>35)
	{
	printf("\n you are pass");
	}
	else
	{
	printf("\n you are fail");
	}
	getch();
}