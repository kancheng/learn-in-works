# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    char ch;

    while ( (ch = getche()) != '\r' ) 
    {
        putchar(ch);
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}