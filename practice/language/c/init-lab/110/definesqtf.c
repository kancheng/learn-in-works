# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# define TRUE 1
# define FALSE 0
# define SQ(x) ( x * x )

int main()
{
    int num;
    int again = 1;
    printf("If the input of the numbers is less than 50, it will end. \n");

    while (again) 
    {
        printf("Please enter a number : ");
        scanf("%d", &num);
        printf("The Square number : %d \n", SQ(num));
        if( num >= 50 )
        {
            again = TRUE;
        }
        else
        {
            again = FALSE;
        }
    }
    system("pause");
    return 0;
}