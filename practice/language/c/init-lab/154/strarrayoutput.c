# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str[4][80];
    int i;
    puts("Please enter the four-line sentences. \n");
    for ( i = 0; i < 4 ; i++)
    {
        gets(str[i]);
    }
    puts ("The results output in reverse. \n");
    for ( i = 3; i >= 0 ; i--)
    {
        puts(str[i]);
    }
    
    system("pause");
    return 0;
}