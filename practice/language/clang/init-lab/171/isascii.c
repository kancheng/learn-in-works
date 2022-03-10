# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{

    int i;

    for (i = 0; i < 130; i++ )
    {
        if (isascii(i) == 0 )
        {
            printf("i = %d is not ascii code. \n", i);
        }
    }    

    system("pause");
    return 0;
}