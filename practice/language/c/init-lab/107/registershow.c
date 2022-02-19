# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    register int i;
    int tmp = 0;
    for ( i = 1; i <= 100; i++)
    {
        tmp += i;
    }
    printf("Sum : %d \n", tmp);
    system("pause");
    return 0;
}