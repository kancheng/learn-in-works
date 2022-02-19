# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    short int i, j ,k;

    i = 32767;
    j = i + 1;
    k = j - 1;
    printf("i = %d \n", i);
    printf("j = %d \n", j);
    printf("k = %d \n", k);
    system("pause");
    return 0;
}