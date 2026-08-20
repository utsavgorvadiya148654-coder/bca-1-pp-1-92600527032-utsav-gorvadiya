#include <stdio.h>

int main()
{
    float salary, hra, ta, da, pf, gross;
      clrscr();
    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    if (salary >= 5000)
    {
	hra = 5 * salary / 100;
	ta  = 6 * salary / 100;
	da  = 4 * salary / 100;
	pf  = 5 * salary / 100;
    }
    else
    {
	hra = 4 * salary / 100;
	ta  = 5 * salary / 100;
	da  = 3 * salary / 100;
	pf  = 4 * salary / 100;
    }

    gross = salary + hra + ta + da - pf;

    printf("\nHRA = %.2f", hra);
    printf("\nTA  = %.2f", ta);
    printf("\nDA  = %.2f", da);
    printf("\nPF  = %.2f", pf);
    printf("\nGross Salary = %.2f", gross);
    getch();
    return 0;
}