# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i, sum;

    sum = 0;
    for( i = 2; i <= 100; i++ )
    {

        if ( ( i % 2 ) != 0 )
        {
            continue;
        }
        sum += i;
    }
    printf("The 'sum' is %d . \n", sum);
    system("pause");
    return 0;
}