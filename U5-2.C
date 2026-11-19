//wap which caluclates factoria of a number of udf funcation

#include<stdio.h>
#include<conio.h>

int fact(int a);
void main()
{
	int x,ans;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",x);

	ans = fact(x);

	printf("\n factorial is : %d",ans);
	getch();
}
int fact (int a)
{
	int f=1;
	while(a>=1)
	{
	   f = f * a;
	   a = a = 1;
	}
	return(f);
}


