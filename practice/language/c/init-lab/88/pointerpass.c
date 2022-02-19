# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
void swap( x, y)
int *x, *y;
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int i, j;
    i = 5;
    j = 6;
    printf("It's before calling swap. \n");
    printf("i = %d, j = %d \n", i, j);
    swap(&i, &j);
    printf("It's after calling swap. \n");
    printf("i = %d, j = %d \n", i, j);
    system("pause");
    return 0;
}
