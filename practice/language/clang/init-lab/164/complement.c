# include <stdio.h>
# include <stdlib.h>

int main()
{
    int a, b;
    a = 17;
    b = ~a;
    printf("1's complement of a (Decimal). = %d \n", b);
    printf("1's complement of a (Hexadecimal) = %x \n", b);
    system("pause");
    return 0;
}