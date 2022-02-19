# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    char ch;
    int year;

    printf("Do you want to test a driver's license? (y/n)");
    ch = getche();
    printf("\n");
    if ( (ch == 'y') || (ch == 'Y')) 
    {
        printf("How old are you ? ");
        scanf(" %d", &year);
        if ( year < 18) 
        {
            printf("Sorry! You are too young. \n");
        }
        else
        {
            printf("You can test a driver's license. \n");
        }

    }

    system("pause");
    return 0;
}