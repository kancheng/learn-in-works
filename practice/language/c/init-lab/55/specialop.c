# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int a, b, z;
    printf("Please enter any two number : ");
    scanf("%d%d", &a, &b);
    z = ( a > b ) ? a : b;
    printf("This number is the largest of the two numbers: %d  \n", z);
    system("pause");
    return 0;
}