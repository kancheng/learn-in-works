# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i, j, result;
    for (i = 1 ; i <= 11; i++){
        for (j = 1; j <= 11; j++ ) {
            result = i * j;
            printf("%d * %d=%-3d", i, j, result);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}