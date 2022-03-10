# include <stdio.h>
# include <stdlib.h>

int main()
{
    int a, b;
    a = 25;
    b = 87;
    printf("a & b = %d \n", a&b);
    a &=b;
    printf("a = %d \n", a);
    system("pause");
    return 0;
}