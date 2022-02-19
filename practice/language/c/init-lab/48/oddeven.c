# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int number, rem;
    printf("Please enter any number :  " );
    scanf("%d", &number);
    rem = number % 2;
    if ( rem == 1) 
    {
        printf(" %d  is odd number. \n", number);
    }
    else
    {
        printf(" %d  is even number. \n", number);
    }
    system("pause");
    return 0;
}