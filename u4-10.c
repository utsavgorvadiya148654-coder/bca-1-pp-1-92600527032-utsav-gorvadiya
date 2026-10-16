#include <stdio.h>

int main()
{
    int i, num, total = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        total = total + num;
    }

    printf("Total of 10 numbers = %d\n", total);

    return 0;
}
