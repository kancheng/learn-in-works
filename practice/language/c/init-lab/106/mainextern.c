# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int f(int i);
int v;
int main()
{
    int i = 2;
    v = 3;
    printf("i = %d; v = %d; f() = %d \n", i,v,f(i));
    system("pause");
    return 0;
}