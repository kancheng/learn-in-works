# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str1[80] = "OwO///";
    char *str2 = "OUO ///";
    char *str;
    char *strcat();

    printf("The string output results are as follows : \n");
    str = strcat( str1, str2);
    puts(str1);
    puts(str);
    system("pause");
    return 0;
}