# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    int i = 5;
    void palindrom(int n);
    palindrom(i);
    printf("\n");
    system("pause");
    return 0;
}
void palindrom(n)
int n;
{
    char next;

    if ( n <= 1 ) 
    {
        next = getche();
        printf("\n");
        putchar(next);
    }
    else
    {
        next = getche();
        palindrom(n-1);
        putchar(next);
    }
}
