# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int sum = 0;
    int i = 1;
    printf("    i     |  Total  \n");
    printf("------------------- \n");
    for (i; i <= 9; i++){
        sum += i;
        printf("    %d     |      %d  \n", i, sum);
    }

    system("pause");
    return 0;
}