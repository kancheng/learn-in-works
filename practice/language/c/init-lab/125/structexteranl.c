# include <math.h>
# include <stdio.h>
# include <stdlib.h>
struct score
{
     int math;
     int eng;
     int cter;
};
void sum ( struct score sc, int index)
{
    static int sum1 = 0;
    static int sum2 = 0;
    static int sum3 = 0;
    sum1 += sc.math;
    sum2 += sc.eng;
    sum3 += sc.cter;
    if (index == 4)
    {
        printf("The average number of math : %5.2f \n", sum1/5.0);
        printf("The average number of english : %5.2f \n", sum2/5.0);
        printf("The average number of computer : %5.2f \n", sum3/5.0);
    }
}
int main()
{
    struct score test[5];
    int i;
    printf("Please enter the score of number : \n");
    printf(" Math | English | Computer \n");
    for ( i = 0; i < 5; i++ )
    {
        scanf("%d%d%d", &test[i].math, &test[i].eng, &test[i].cter);
        sum( test[i], i);
    }
    system("pause");
    return 0;
}

 
