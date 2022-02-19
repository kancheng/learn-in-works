# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i;
    printf("MS Office and LiberOffice List: \n");
    printf("1. Word \n");
    printf("2. Excel \n");
    printf("3. Access \n");
    printf("------------------------------- \n");
    printf("Please enter any key of the numbers : \n");
    scanf("%d", &i);
    switch(i)
    {
        case 1: printf("'LibreOffice Writer' can be the replacement for 'MS Office Word'. \n");
        break;
        case 2: printf("'LibreOffice Calc' can be the replacement for 'MS Office Excel'. \n");
        break;
        case 3: printf("'LibreOffice Base' can be the replacement for 'MS Office Access'. \n");
        break;
    }

    system("pause");
    return 0;
}