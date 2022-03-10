# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    char ch1 = 'd';

    ch1 -= 1;

    printf("ch1 : %c \n", ch1);

    ch1 += 5;

    printf("ch1 : %c \n", ch1);

    system("pause");
    return 0;
}