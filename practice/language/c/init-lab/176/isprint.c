# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    int ch;

    while ((ch = getche()) != '\r')
    {
        if (isprint(ch))
        {
            putchar(ch);
            printf("\n");
        }
    }
    system("pause");
    return 0;
}