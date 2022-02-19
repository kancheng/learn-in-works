# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int sum = 0;
    int i = 1;

    for (; i <= 100;)
        sum += i++;
    printf("Total = %d \n", sum);
    system("pause");
    return 0;
}