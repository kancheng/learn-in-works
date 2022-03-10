# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str1[80] = "Rust Introduction";
    char *str2 = "Vue Introduction";
    int i;

    i = strcmp(str1, str2);
    if ( i == 0 )
    {
        printf("The string is the same. \n");
    }
    else if ( i > 0 )
    {
        printf("The string isn't the same. \n");
        puts(" 'str1' > 'str2' ");
    }
    else
    {
        printf("The string isn't the same. \n");
        puts(" 'str2' > 'str1' ");
    }
    system("pause");
    return 0;
}