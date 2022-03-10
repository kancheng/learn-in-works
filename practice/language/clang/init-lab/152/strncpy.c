# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str1[80] = "Rust Introduction";
    char *str2 = "This book is important.";
    int i;

    puts("It is to call 'strcpy' before.");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    strncpy( str1, str2, 10);
    i = strncmp( str1, str2, 10);
    puts("It is to call my cat for the first time after.");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    strncpy( str1, str2, 60);
    puts("It is to call my cat for the second time after.");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    system("pause");
    return 0;
}