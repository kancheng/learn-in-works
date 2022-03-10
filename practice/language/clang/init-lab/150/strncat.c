# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str1[80] = "Rust Introduction";
    char *str2 = "This book is important.";

    puts("The first time combines both strings.");
    strncat( str1, str2, 4);
    puts(str1);
    puts("The second time combines both strings.");
    strncat( str1, str2, 50);
    puts(str1);
    system("pause");
    return 0;
}