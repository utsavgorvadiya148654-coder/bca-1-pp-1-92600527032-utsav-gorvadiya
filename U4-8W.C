#include<stdio.h>
#include<conio.h>

void main()

{
	int n,n1=0,n2=1,s;

	clrscr();
	printf("printf enter value of n:");
	scanf("%d"n);

	s=n1+n2;

	printf(" %d %d %d"n1,n2,s);
	while(s<=n)

	{
		n1=n2;
		n2=s;
		s=n1+n2 ;
		printf("%d",s);
	}

	getch();
}
