# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    int i;

    for ( i = 0 ; i < 256 ; i++ ) 
    {
        if ( isgraph(i) != 0 ) 
        {
            printf("%4d %c \t", i, i);
        }
    }
    system("pause");
    return 0;
}