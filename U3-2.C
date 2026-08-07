//wap to interchamge two without using third variable
#include<stdio.h>
#include<conio.h>

void main()
{

	int x,y;
	clrscr();

	printf("enter the value of x:");
	scanf("%d",&x);

	printf("enter the value of y:");
	scanf("%d",&y);

	if(x>y)
	{
		printf("\n value of x is maximum");
		printf("\n x =%d",x*x);
	}

	else
	{
	       printf("\n value of y is maximum");
		printf("\n x =%d",y*y)
	}

	getch();
}