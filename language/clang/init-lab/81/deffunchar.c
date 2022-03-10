# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
void print_char(c)
char c;
{
    printf("%c \n", c);
}

int main(void)
{
    int i;
    for ( i = 0; i < 5; i++) 
    {
        print_char('A');
    }
    system("pause");
    return 0;
}