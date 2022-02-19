# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    char ch;
    printf("please enter a character : ");

    while ((ch = getche())!='\r')
    {
        printf("\n");
        if ((ch >= 'A' ) && ( ch <= 'Z' ))
        {
            printf("This is a character of the lowercase letters.\n");
        }
        else if ((ch >= 'a' ) && ( ch <= 'z' ))
        {
            printf("This is a character of the capital letters.\n");
        }
        else if ((ch >= '0' ) && ( ch <= '9' ))
        {
            printf("This is a numeric character.\n");
        }
        else
        {
            printf("This is a special character.\n");
        }
        printf("please enter a character : ");
    }
    system("pause");
    return 0;
}