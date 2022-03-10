# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i = 10;
    float j = 123.56;

    printf("Octal\n");
    printf("/%o/ \n", i);
    printf("/%-8o/ \n", i);
    printf("Hexadecimal\n");
    printf("/%x/ \n", i);
    printf("/%8x/ \n", i);
    printf("No Plus–minus sign\n");
    printf("/%u/ \n", i);
    printf("/%8u/ \n", i);
    printf("Scientific notation\n");
    printf("/%e/ \n", j);
    printf("/%8.3e/ \n", j);
    system("pause");
    return 0;
}