
#include<stdio.h>
#include<conio.h>

void main()
{
	int x=0,y=0,z=0;

	clrscr();

	printf("\n enter  value of x:");
	scanf("%d",&x);


	printf("\n enter  value of y:");
	scanf("%d",&y);


	printf("\n enter  value of z:");
	scanf("%d",&z);

	if (x>y)
	{
		if(x>z)
		{
		  printf("\n %d is max",x);
		}
		else
		{
		 printf("\n %d is max",y);
		}
	}
	else
	{
		 if(y>z)
		 {
		    printf("\n %d is max",y);
		 }
		 else
		 {
		   printf("\n %d is max",z);
		 }
	}
	getch();
}


