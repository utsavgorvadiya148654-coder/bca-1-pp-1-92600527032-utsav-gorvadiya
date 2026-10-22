//demo of  do while loop
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,i=1;
	char ch;
	clrscr();


	do
	{

		printf("\n enter value of x:");
		scanf("%d",&x);

		printf("\n enter value of y:");
		scanf("%d",&y);

		z=x+y;
		printf("\n sumis: %d",z);

		printf("\n  do you want to continue(y/n):");
		ch=getch();
	} while(ch=='y'||ch=='y');
	getch();
}