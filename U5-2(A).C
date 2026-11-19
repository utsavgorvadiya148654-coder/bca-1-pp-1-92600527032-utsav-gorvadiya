//wap which caluclates factoria of a number of udf funcation

#include<stdio.h>
#include<conio.h>

void fact(int a);
void main()
{
	int x;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",&x);
	fact(x);

	getch();
}
void fact (int a)
{
	int f=1;
	while(a>=1)
	{
	   f = f * a;
	   a = a - 1;
	}
	printf("\n factorial is : %d",f);
}




