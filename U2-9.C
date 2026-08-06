//wap to interchamge two without using third variable
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	printf("enter the value of x:");
	scanf("%d",x);

	printf("enter the value of y:");
	scanf("%d",y);

	x=y+y;
	y=x-y;
	x=x-y;

	printf("\n interchamg value is :%d",x);
	printf("\n interchamg value is :%d",y);

	getch();
}


