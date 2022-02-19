# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int a, b, c;

void add()
{
    c = a + b;
}
int main()
{
    a = b = 4;
    add();
    printf("c = %d \n", c);
    system("pause");
    return 0;
}