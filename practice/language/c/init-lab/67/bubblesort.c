# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i, j, tmp;
    int num[5] = { 3, 6, 7, 5, 9};

    for ( i = 1; i < 5 ; i++ )
    {
        for ( j = 0; j < 4 ; j++ )
        {
            if (num[j] > num [j+1])
            {
                tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
            }
        }
        printf("loop %d", i);
        for ( j = 0; j < 5 ; j++ )
        {
            printf("%4d", num[j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}