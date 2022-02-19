# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    int ch;

    for ( ; ; )
    {
        ch = getche();
        if (ispunct(ch))
        {
            putchar(ch);
            printf("\n");
        }
        else
        {
            break;
        }
    }
    system("pause");
    return 0;
}