# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{

    int value;

    char *str1 = "123";
    char *str2 = "123tre";
    char *str3 = "r541";

    value = atoi(str1);
    printf("%d \n", value);
    value = atoi(str2);
    printf("%d \n", value);
    value = atoi(str3);
    printf("%d \n", value);
    system("pause");
    return 0;
}