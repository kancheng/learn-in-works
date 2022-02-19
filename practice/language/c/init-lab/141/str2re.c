# include <stdio.h>
# include <stdlib.h>

int main()
{
    char str1[80], *str2;
    char *gets();

    printf("Please enter the sentence : \n");
    while ((str2 = gets(str1)) != NULL)
    {
        printf("The first string  is '%s' \n", str1);
        printf("The second string  is '%s' \n", str2);
    }

    system("pause");
    return 0;
}