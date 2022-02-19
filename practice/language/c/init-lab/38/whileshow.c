# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i, sum;

    i = 1;
    sum = 0;
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("Total : %d \n", sum);
    system("pause");
    return 0;
}