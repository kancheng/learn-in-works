# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int val;

void max (int a, int b)
{
    val = ( a > b )? a : b;
}

int main()
{
    int c = 5;
    int d = 6;
    max ( c, d);
    printf("The higher number is %d \n", val);
    system("pause");
    return 0;
}