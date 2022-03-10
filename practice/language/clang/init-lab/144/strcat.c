# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str1[80] = "OwO///";
    char *str2 = "OUO ///";

    printf("The string output results are as follows : \n");
    strcat( str1, str2);
    puts(str1);
    system("pause");
    return 0;
}