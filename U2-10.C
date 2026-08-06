//wap to input quality, discaount and display final amount.
#include<stdio.h>
#include<conio.h>

void main()
{
	int q=0,p=0,d=0,t=0,fa=0,drs=0;

	clrscr();

	printf("************************");

	printf("\n enter quality:",q);
	scanf("%d",&q);

	printf("\n enter price:",d);
	scanf("%d",&d);

	printf("_______________________");

	printf("\n enter discount:",p);
	scanf("%d",&p);

	t=q*p;
	printf("\n total: %d Rs.",t);
	printf("\n disc(\%):");
	printf("%d",d);


	drs=t*d/100;
	printf("\n disc(Rs):",drs);
	printf("_______________________");


	fa=t-drs;

	printf("\n final a amount is ; %d",fa);
	getch();
}