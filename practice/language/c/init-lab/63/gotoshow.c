# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i, j;

start:
    printf("Please enter any two numbers. \n");
    scanf("%d%d", &i, &j);

    if ( i > j )
    {
        goto stop;
    }
    goto start;
stop:
    printf("The end. \n");
    system("pause");
    return 0;
}