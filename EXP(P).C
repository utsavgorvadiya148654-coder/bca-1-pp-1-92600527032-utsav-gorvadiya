//short if condition
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,max;
	clrscr();

	printf("\n enter any two number");
	scanf("%d%d",&x,&y);

	max=(x>y)?x:y;
	printf("%d",max);

       getch();
}