# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i;


    for( i = 0; i <= 100; i++)
    {

        if ( i >= 5 )
        {
            continue;
        }
        printf("The index is %d . \n", i);
    }
    system("pause");
    return 0;
}