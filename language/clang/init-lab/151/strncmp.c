# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str1[80] = "Rust Introduction";
    char *str2 = "This book is important.";
    int i;

    i = strncmp( str1, str2, 10);
    if ( i == 0 )
    {
        printf("The first ten strings are the same. \n");
    }
    else if ( i > 0 )
    {
        printf("The first ten strings are not the same. \n");
        puts(" 'str1' > 'str2' ");
    }
    else
    {
        printf("The first ten strings are not the same. \n");
        puts(" 'str2' > 'str1' ");
    }
    system("pause");
    return 0;
}