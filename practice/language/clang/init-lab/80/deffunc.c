# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
void larger_value(a, b)
int a, b;
{
    if( a < b )
    {
        printf("the higher of the numbers %d. \n", b);
    }
    else if ( a > b )
    {
        printf("the higher of the numbers %d. \n", a);
    }
    else
    {
        printf("The two numbers are the same. \n");
    }
}

int main(void)
{
    int i,j;

    printf("Please enter two numbers. \n ===> ");
    scanf("%d %d", &i, &j);
    larger_value(i,j);
    system("pause");
    return 0;
}