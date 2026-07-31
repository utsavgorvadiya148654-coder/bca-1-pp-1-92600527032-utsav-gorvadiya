#include<stdio.h>
#include<conio.h>

void main()
{
	float principal,rate, time, simple_interest;

	clrscr();
	printf("enter principal amount:");
	scanf("%f",&principal);

	printf("enter principal interest:");
	scanf("%f",&rate);

	printf("enter principal years:");
	scanf("%f",&time);

	simple_interest =(principal * rate* time)/100;
	printf("\n*************************************");
	printf("\n principal amount   : %.2f",principal);
	printf("\n reat of interest   : %.2f",rate);
	printf("\n number of years    : %.2f",time);
	printf("\n*************************************");

	printf("\nthe simple interest is : %.2f\n",simple_interest);
	getch();
}