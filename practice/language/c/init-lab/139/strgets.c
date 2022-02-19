# include <stdio.h>
# include <stdlib.h>

int main()
{
    char str1[80];
    char str2[80];

    printf("Please enter two sentences : \n");
    gets(str1);
    scanf("%s", str2);
    printf("The first string  is '%s' \n", str1);
    printf("The second string  is '%s'\n", str2);

    printf("\n");
    system("pause");
    return 0;
}