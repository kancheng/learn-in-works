# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str1[80] = "Rust Introduction";
    char *str2 = "This book is important.";

    int i;

    i = strlen(str1);
    printf("The first string length is %d . \n", i);
    i = strlen(str2);
    printf("The second string length is %d . \n", i);
    system("pause");
    return 0;
}