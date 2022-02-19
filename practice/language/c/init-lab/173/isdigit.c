# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    char ch;

    do
    {
        ch = getche();
        if (isdigit(ch))
        {
            putchar(ch);
            printf("\n");
        }
    } while (iscntrl(ch));
    system("pause");
    return 0;
}