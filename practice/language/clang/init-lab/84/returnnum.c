# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int min(x,y)
int x,y;
{
    if ( x <= y )
    {
        return x;
    }
    else
    {
        return y;
    }
}
int max( x, y)
int x,y;
{
    if ( x <= y )
    {
        return y;
    }
    else
    {
        return x;
    }
}
int main ()
{
    int num, value, i;
    int tmpmax = -1000;
    int tmpmin = 1000;
    int sum = 0;

    printf("Please enter the number of data : ");
    scanf("%d", &num);
    for (i=1; i <= num; i++)
    {
        printf("Please enter the number %d : ", i);
        scanf("%d", &value);
        tmpmin = min(value, tmpmin);
        tmpmax = max(value, tmpmax);
        sum+= value;
    }
    printf("Please enter the maximum value %d. \n", tmpmax);
    printf("Please enter the minimum value %d. \n", tmpmin);
    printf("The sum : %d \n", sum);
    system("pause");
    return 0;
}