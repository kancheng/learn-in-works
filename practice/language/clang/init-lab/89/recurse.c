# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    int i;
    int factorial();
    for ( i = 0 ; i < 5 ; i++ )
    {
        printf("%d! = %d \n", i, factorial(i));
    }
    system("pause");
    return 0;
}
int factorial(j)
int j;
{
    int sum;
    if ( j == 0 ) 
    {
        sum = 1;
    }
    else
    {
        sum = j * factorial( j - 1 );
    }
    return sum;
}
