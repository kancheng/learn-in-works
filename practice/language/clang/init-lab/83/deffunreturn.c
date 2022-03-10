# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int sum(n)
int n;
{
    int i, ret_sum;

    ret_sum = 0;
    for ( i = 1; i <= n; i++) 
    {
        ret_sum += i;
    }
    return ret_sum;
}
int main ()
{
    int n;
    printf("Please enter the maximum value of the sequence sum to be generated. \n");
    scanf("%d", &n);
    printf("The sequence sum of 1 to %d is %d. \n", n, sum(n));
    system("pause");
    return 0;
}