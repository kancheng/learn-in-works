# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{

    int i, j, tmp, sum, step, first, magic[4][4];

    printf("Please enter initialize numbers of the Cube (4 * 4) : \n");
    printf("=> \n");
    scanf("%d", &first);

    printf("Please enter the difference number : ");
    scanf("%d", &step);
    tmp = first;
    for ( i = 0; i < 4 ; i++ )
    {
        for ( j = 0; j < 4 ; j++ )
        {
            *(*(magic+i)+j) = tmp;
            tmp += step;
        }
    }
    printf("Initial : \n");
    for ( i = 0; i < 4 ; i++ )
    {
        for ( j = 0; j < 4 ; j++ )
        {
            printf("%5d", *(*(magic+i)+j));
        }
        printf("\n");
    }
    sum = **magic + *(*(magic+3)+3);
    for ( i = 0, j = 0; i < 4; i++, j++ )
    {
        *(*(magic+i)+j) = sum - *(*(magic+i)+j);
    }
    for ( i = 0, j = 3; i < 4; i++, j-- )
    {
        *(*(magic+i)+j) = sum - *(*(magic+i)+j);
    }
    printf("Final : \n");
    for ( i = 0; i < 4 ; i++ )
    {
        for ( j = 0; j < 4 ; j++ )
        {
            printf("%5d", *(*(magic+i)+j));
        }
        printf("\n");
    }

    system("pause");
    return 0;
}