# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{

    int digits = 6;

    double value1 = 432.1567;
    double value2 = 1234.34567;
    char str1[80];
    char str2[80];

    gcvt(value1, digits, str1);
    gcvt(value2, digits, str2);
    printf("%s \n", str1);
    printf("%s \n", str2);
    system("pause");
    return 0;
}