# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{

    int i, j, tmp, sum, step, first, magic[4][4];
    int *p, **ptr, n, m;
    n = 10;
    m = 20;

    p = &n;
    ptr = &p;

    printf("n = %d ; address of n = %d \n", n,&n);
    printf("*p=%d ; variable content of p = %d ; address of p = %d \n", *p, p, &p);
    printf("**ptr=%d ; variable content of ptr = %d ; address of ptr = %d \n", **ptr, ptr, &ptr);
    **ptr = m;
    printf("m = %d ; **ptr = %d \n", m,**ptr);
    system("pause");
    return 0;
}