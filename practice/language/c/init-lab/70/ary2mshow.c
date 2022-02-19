# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i, j, tmp;
    int num1[3][3], num2[3][3], num3[3][3];

    printf("Please enter the data of the first two-dimensional array : \n");
    for ( i = 0; i < 3 ; i++ )
    {
        for ( j = 0; j < 3 ; j++ )
        {
            scanf("%d", &num1[i][j]);
        } 
    }
    printf("Please enter the data of the second two-dimensional array : \n");
    for ( i = 0; i < 3 ; i++ )
    {
        for ( j = 0; j < 3 ; j++ )
        {
            scanf("%d", &num2[i][j]);
        } 
    }

    for ( i = 0; i < 3 ; i++ )
    {
        for ( j = 0; j < 3 ; j++ )
        {
            tmp = 0;
            tmp += num1[i][0] * num2[0][j];
            tmp += num1[i][1] * num2[1][j];
            tmp += num1[i][2] * num2[2][j];
            num3[i][j] = tmp;
        }
    }
    printf("The result of the multiplication is as follows : \n");
    for (i = 0; i < 3; i++ )
    {
        printf("%3d %3d %3d \n", num3[i][0], num3[i][1], num3[i][2]);
    }
    system("pause");
    return 0;
}