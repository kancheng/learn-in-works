# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    char ch;

    while ( (ch = getche()) != '\r' )
    {
        if ( islower(ch) != 0)
        {
            putchar(toupper(ch));
        }
        else
        {
            if (isupper(ch) != 0 )
            {
                putchar(tolower(ch));
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}