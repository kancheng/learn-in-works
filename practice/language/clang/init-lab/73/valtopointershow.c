# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i, k, *j;
    i = 5;
    j = &i;
    printf(" j = %d\n j Points to = %u\n", *j, j);
    k = 10;
    *j = k;
    printf(" j = %d\n j Points to = %u\n", *j, j);
    system("pause");
    return 0;
}