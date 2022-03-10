# include <stdio.h>
# include <stdlib.h>

int main()
{
    char string[3] = {'H', 'i', '!'};
    int i ;
    for ( i = 0; i < 3; i++ )
    {
        printf("%c", string[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}