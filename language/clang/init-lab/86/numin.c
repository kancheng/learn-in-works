# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int minimum(var)
int var[5];
{
    int min,i;
    min = var[0];
    for (i = 0; i <= 4; i++ )
    {
        if ( var[i] < min ) 
        {
            min = var[i];
        }
    }
    return min;
}
int main()
{
    int array[5];
    int minimum_value;
    int i;

    for ( i = 0; i < 5; i++) 
    {
        printf("Please enter the number %d : ", i+1);
        scanf("%d", &array[i]);
    }
    minimum_value = minimum(array);
    printf("The minimum number is %d \n", minimum_value);
    system("pause");
    return 0;
}