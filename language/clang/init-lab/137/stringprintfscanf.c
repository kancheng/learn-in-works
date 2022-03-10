# include <stdio.h>
# include <stdlib.h>

int main()
{
    char str1[15], str2[15], str3[15];

    printf("Please enter 3 strings : \n");

    scanf("%s%s%s", str1, str2, str3);
    printf("The first string  is %s\n", str1);
    printf("The second string  is %s\n", str2);
    printf("The third string  is %s\n", str3);

    printf("\n");
    system("pause");
    return 0;
}