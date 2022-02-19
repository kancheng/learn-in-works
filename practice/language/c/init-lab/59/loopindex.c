# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i;

    for ( i = 1; i <= 100; i++ )
    {
        printf("Index - ' %d '; \n", i);
        if ( i >= 5 )
        {
            break;
        }
    }
    system("pause");
    return 0;
}