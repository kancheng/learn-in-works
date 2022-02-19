# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    char ch;
    ch = getche();

    while ( ch != '\r' ) 
    {
        putchar(ch);
        printf("\n");
        ch = getche();
    }
    printf("\n");
    system("pause");
    return 0;
}