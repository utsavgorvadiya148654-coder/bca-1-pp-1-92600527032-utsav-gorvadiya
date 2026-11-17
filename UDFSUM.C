//demo udf which will calculate sum of two number
#include<stdio.h>
#include<conio.h>

int sum(int a,int b);    //function prototype or function declaration

void main()
{
	int x=2,y=5,z;
	clrscr();

	z = sum (x,y);   //function calling statement with arguments
	printf("\n answer is : %d",z);
	getch();
}
int sum(int a,int b)
{
	int c;
	c = a + b;
	return(c);
}
