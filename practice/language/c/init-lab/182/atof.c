# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{

    double value;

    char *str1 = "123.43";
    char *str2 = "123.43tre";
    char *str3 = "r54.321";

    value = atof(str1);
    printf("%8.3f \n", value);
    value = atof(str2);
    printf("%8.3f \n", value);
    value = atof(str3);
    printf("%8.3f \n", value);
    system("pause");
    return 0;
}