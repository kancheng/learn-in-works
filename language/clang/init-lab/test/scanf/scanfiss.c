# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i, n;
    int count = 1;
    printf("Please set any guess number :\n" );
    scanf("%d \n", &i);
    for(;;)
    {
        printf("Please enter the number you guessed (%d) : ", count);
        scanf("%d \n", &n);
        if ( i == n ) /* Please set any guess number */
        {
            break;
        }
        count++;
    }
    printf("It took %d times to get the correct guess. \n", count);
    system("pause");
    return 0;
}