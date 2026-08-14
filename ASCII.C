//wap display ascii code of input character
#include<stdio.h>
#include<conio.h>

void main()
{
       char x;
       clrscr();
       printf("\n enter any  character:");
       scanf ("%c",&x);

       printf("\n input character is : %c",x);
       printf("\n ascii code is : %d",x);
       getch();
}