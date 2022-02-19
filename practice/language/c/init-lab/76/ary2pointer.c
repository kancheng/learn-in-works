# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int num [5][7] = {
        { 0, 1, 1, 1, 1, 1, 0},
        { 0, 0, 0, 1, 0, 0, 0},
        { 1, 1, 1, 1, 1, 1, 1},
        { 0, 0, 0, 1, 0, 0, 0},
        { 0, 0, 0, 1, 0, 0, 0},
    };
    int i, j;

    for ( i = 0; i < 5 ; i++ )
    {
        for ( j = 0; j < 7 ; j++ )
        {
            if ( *(*(num + i) + j) == 1 )
            {
                printf("%c", 1);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    system("pause");
    return 0;
}