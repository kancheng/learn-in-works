# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{

    int radix1 = 10;
    int radix2 = 16;
    int value1 = 15677654;
    int value2 = 7445321;
    char str1[80];
    char str2[80];

    itoa(value1, str1, radix1);
    itoa(value2, str2, radix2);
    printf("%s \n", str1);
    printf("%s \n", str2);
    system("pause");
    return 0;
}