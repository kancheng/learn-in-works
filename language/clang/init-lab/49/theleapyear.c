# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int year, rem4, rem100, rem400;
    printf("Please enter year :  " );
    scanf("%d", &year);
    rem400 = year % 400;
    rem100 = year % 100;
    rem4 = year % 4;
    if ( ((rem4 == 0) && (rem100!=0)) || (rem400 == 0)) 
    {
        printf(" %d  is a leap year. \n", year);
    }
    else
    {
        printf(" %d  is not a leap year. \n", year);
    }
    system("pause");
    return 0;
}