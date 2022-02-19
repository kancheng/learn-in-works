# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i, j;
    for ( i = 0; i <= 9; i++ ) 
    {
        for ( j = 0; j <= 9; j++ ) 
        {
            if ( i == j )
            {
                printf("\2");
            }
            else
            {
                if ( i == ( 9 - j ) )
                {
                    printf("\2");
                }
                else
                {
                    printf(" ");
                }
            }

        }
        printf("\n");
    }

    system("pause");
    return 0;
}