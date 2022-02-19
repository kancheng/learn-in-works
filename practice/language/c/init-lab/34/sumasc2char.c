# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i = 1;
    for (i = 97 ; i <= 122; i++){
        printf("%d=%c\t", i, i);
    }
    printf("\n");
    system("pause");
    return 0;
}