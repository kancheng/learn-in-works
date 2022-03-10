# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i;

    while (1)
    {
        printf("Please enter any number :  " );
        scanf("%d", &i);
        if ( i < 0 ) 
        {
            i = -i;
        }
        printf("The absolute value is %d \n", i);
    }

    system("pause");
    return 0;
}