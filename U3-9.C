#include<stdio.h>
#include<conio.h>

void main()
{
	int x, y;
	clrscr();
	printf("\n enter first number:");
	scanf("%d",&x);

	printf("\n enter second number:");
	scanf("%d",&y);

	if (x % y ==0)

		printf("%d is divisible by %d:",x,y);
	else
		printf("%d is not divisible by %d",x,y);

	getch();
}