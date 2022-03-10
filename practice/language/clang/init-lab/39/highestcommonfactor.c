# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i, j, tmp;

    printf("Please enter two positive integers :  \n");
    scanf("%d %d", &i, &j);
    while (j != 0) 
    {
        tmp = i % j;
        i = j;
        j = tmp;

    }
    printf("Highest Common Factor : %d \n", i);
    system("pause");
    return 0;
}