# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int sum = 0;
    int i;

    for (i = 1; i <= 100; i++)
        sum += i;
    printf("Sum = %d \n", sum);
    system("pause");
    return 0;
}