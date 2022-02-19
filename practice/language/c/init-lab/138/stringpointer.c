# include <stdio.h>
# include <stdlib.h>

int main()
{
    char *str1 = "Hello !";
    char *str2;
    str2 = str1;

    printf("The first string  is %s\n", str1);
    printf("The second string  is %s\n", str2);

    printf("\n");
    system("pause");
    return 0;
}