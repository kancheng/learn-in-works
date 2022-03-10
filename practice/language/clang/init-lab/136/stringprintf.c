# include <stdio.h>
# include <stdlib.h>

int main()
{
    char string[] = "Hello !";
    int i = 0;

    printf("/%s/\n", string);
    printf("/%2s/\n", string);
    printf("/%14s/\n", string);
    printf("/%-14s/\n", string);
    printf("\n");
    system("pause");
    return 0;
}