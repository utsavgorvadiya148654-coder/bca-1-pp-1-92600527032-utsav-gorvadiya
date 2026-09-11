//u3-prg-12
#include<stdio.h>
#include<conio.h>

main()
{
	char ch;

	clrscr();
	printf("enter a character:");
	scanf("%c",&ch);

	if(ch>= 65 &&ch<= 90)
	   printf("uppercase letter");
	else if(ch>=97&&ch<=122)
	  printf("lowercase letter");

	else
		printf("it is digit");

	getch();

}
