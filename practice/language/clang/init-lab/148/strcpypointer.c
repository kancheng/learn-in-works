# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str1[80] = "Rust Introduction";
    char *str2 = "This book is important.";
    char *s;
    char *strcpy();

    puts("It is to call 'strcpy' before.");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    s = strcpy(str1, str2);
    puts("It is to call 'strcpy' after.");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("s = %s\n", s);
    system("pause");
    return 0;
}