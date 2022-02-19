# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# define MAX(a, b) ( a > b ) ? a : b

int main()
{
    int x, y, max;
    x = 5;
    y = 10;
    max = MAX(x,y);
    printf("Max : %d \n", max);
    system("pause");
    return 0;
}