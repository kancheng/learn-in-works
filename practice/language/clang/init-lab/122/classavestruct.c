# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
    struct score {
        int math;
        int english;
        int computer;
    };
    struct score  test[5]  = {
        { 56, 77, 55},
        { 99, 78, 57},
        { 45, 66, 99},
        { 88, 97, 78},
        { 99, 67, 88}
    };
    int i, sum1, sum2, sum3;
    float ave1, ave2, ave3;
    sum1 = sum2 = sum3 = 0;
    for ( i = 0; i < 5; i++ )
    {
        sum1 += test[i].math;
        sum2 += test[i].english;
        sum3 += test[i].computer;
    }
    ave1 = (float) sum1 /5.0;
    ave2 = (float) sum2 /5.0;
    ave3 = (float) sum3 /5.0;
    printf(" The average number of math :  %8.3f \n" ,ave1);
    printf(" The average number of english :  %8.3f \n" ,ave2);
    printf(" The average number of computer :  %8.3f \n" ,ave3);
    system("pause");
    return 0;
}

 
