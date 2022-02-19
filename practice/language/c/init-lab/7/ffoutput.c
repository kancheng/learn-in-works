# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    float i;
    i = 123.56;
    printf(" /%f/ \n", i);
    printf(" /%3.2f/ \n", i);
    printf(" /%8.2f/ \n", i);
    printf(" /%-8.2f/ \n", i);
    printf(" /%+8.2f/ \n", i);
    printf(" /%08.2f/ \n", i);
    system("pause");
    return 0;
}