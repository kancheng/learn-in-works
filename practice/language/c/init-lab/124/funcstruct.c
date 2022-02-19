# include <math.h>
# include <stdio.h>
# include <stdlib.h>
void sum ( int i, int j, int k, int index)
{
    static int sum1 = 0;
    static int sum2 = 0;
    static int sum3 = 0;
    sum1 += i;
    sum2 += j;
    sum3 += k;
    if (index == 4)
    {
        printf("The average number of math : %5.2f \n", sum1/5.0);
        printf("The average number of english : %5.2f \n", sum2/5.0);
        printf("The average number of computer : %5.2f \n", sum3/5.0);
    }
}
int main()
{
    struct score
    {
        int math;
        int eng;
        int cter;
    };
    struct score test[5] = {
        { 74, 80, 66 },
        { 72, 90, 77 },
        { 77, 65, 60 },
        { 65, 58, 74 },
        { 81, 79, 68 }
    };
    int i;
    for ( i = 0; i < 5; i++)
    {
        sum ( test[i].math, test[i].eng, test[i].cter, i);
    }
    system("pause");
    return 0;
}

 
