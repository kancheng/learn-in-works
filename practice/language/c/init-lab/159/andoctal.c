# include <stdio.h>
# include <stdlib.h>

int main()
{
    unsigned int a, b;
    a = 077;
    b = 0150;
    printf("a & b (Decimal) = %d \n", a&b);
    printf("a & b (Octal) = %o \n", a&b);
    system("pause");
    return 0;
}