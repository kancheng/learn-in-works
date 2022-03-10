# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i;
    void print_char();
    for ( i = 0; i < 5; i++) 
    {
        print_char('A');
    }
    system("pause");
    return 0;
}
void print_char(c)
char c;
{
    printf("%c \n", c);
}