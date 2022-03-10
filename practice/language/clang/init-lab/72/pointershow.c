# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int *ptr, i, val;
    i = 20;
    ptr = &i;
    val = *ptr;
    printf("*ptr = %d ; val = %d \n", *ptr, val );
    system("pause");
    return 0;
}