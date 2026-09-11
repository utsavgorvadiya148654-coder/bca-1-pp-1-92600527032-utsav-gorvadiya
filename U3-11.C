//u3-prg-11
#include<stdio.h>
#include<conio.h>

main()
{
	char ch;

	clrscr();
	printf("enter a charcter:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("vowel");

	else
		printf("not  a vowel");

	getch();
}