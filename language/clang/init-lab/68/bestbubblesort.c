# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i, j, tmp;
    int num[] = { 3, 6, 7, 5, 9};
    int flag;

    for ( i = 1; i < 5 ; i++ )
    {
        flag = 1;
        for ( j = 0; j < 4 ; j++ )
        {
            if (num[j] > num [j+1])
            {
                tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
                flag = 0;
            }

        }
        if (flag == 1) {
            break;
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