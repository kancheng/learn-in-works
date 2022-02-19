# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i, j;

    printf(" \n");
    for (i = 1 ; i <= 10; i++){
        for (j = 1; j <= i; j++ ) {
            printf("%c%c", 97, 97);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}