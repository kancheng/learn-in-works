# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int array[5];
    int *ptr, sum, i;
    printf("Please enter five numbers : \n");
    for ( i = 0; i < 5; i++ )
    {
        scanf("%d", &array[i]);
    }
    sum = 0;
    for ( ptr = array; ptr < &array[5]; ptr++ ) 
    {
        sum += *ptr;
    }
    printf("Total : %d", sum);
    system("pause");
    return 0;
}