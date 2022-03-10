# include <stdio.h>
# include <stdlib.h>

int main()
{
    int a, b;
    a = 15;
    b = a >> 1;
    printf("This right-shift operator has run one time = %d \n", b);
    b = a >> 3;
    printf("This right-shift operator has run three time = %d \n", b);
    system("pause");
    return 0;
}