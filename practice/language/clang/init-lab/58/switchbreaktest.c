# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i;

    for ( i = 1; i <= 5; i++ )
    {
        switch(i)
        {
            case 1: printf(" == CASE 1 ==; \n");
            case 2: printf(" == CASE 2 ==; \n");
            case 3: printf(" == CASE 3 ==; \n");
            break;
            case 4: printf(" == CASE 4 ==; \n");
            case 5: printf(" == CASE 5 ==; \n");
        }
    }


    system("pause");
    return 0;
}