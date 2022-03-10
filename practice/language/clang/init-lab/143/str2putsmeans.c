# include <stdio.h>
# include <stdlib.h>

int main()
{
    char str1[80] = "UNIX C Introduction";
    char *str2 = "Introduction to UNIX";

    printf("The string output results are as follows : \n");
    puts(str1);
    puts(str2);
    puts(str1+4);
    puts(&str1[4]);
    puts(str2+5);
    system("pause");
    return 0;
}