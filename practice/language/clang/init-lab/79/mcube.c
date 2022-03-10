# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int magic[10][10];
    int i, j, k, n;

    printf("Please enter Number of matrices : \n");
    scanf("%d", &n);
    for ( i = 0; i < n ; i++ )
    {
        for ( j = 0; j < n ; j++ )
        {
            *(*(magic+i)+j) = 0;
        }
    }
    i = 1;
    j = (n / 2) - 1;

    for ( k = 1; k <= n*n ; k++ )
    {
        i--;
        j++;
        if ((i == -1) && (j == n))
        {
            i = 1;
            j = n - 1;
        }
        else
        {
            if (i == -1) 
            {
                i = n - 1;
            }
            else
            {
                if (j == n)
                {
                    j = 0;
                }
            }
        }
        if (*(*(magic+i)+j) != 0)
        {
            i+=2;
            j--;
        }
        *(*(magic+i)+j)=k;
    }
    printf("%d * %d Cube \n", n, n);
    for ( i = 0; i < n; i++ )
    {
        for ( j = 0; j < n; j++ )
        {
            printf("%5d", *(*(magic+i)+j));
        }
        printf("\n");
    }

    system("pause");
    return 0;
}