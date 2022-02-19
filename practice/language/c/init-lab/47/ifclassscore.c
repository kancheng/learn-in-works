# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int sum, score, fail_count, num;
    int i;
    float ave;

    sum = fail_count = 0;
    printf("Total number of students :  " );
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
        printf("Please enter any score ( %d ) : ", i);
        scanf("%d", &score);
        sum += score;
        if ( score < 60)
        {
            fail_count++;
        }
    }
    ave = (float) sum / (float) num;
    printf("Average number of score : %6.2f \n", ave);
    printf("The number of students who failed : %d \n", fail_count);

    system("pause");
    return 0;
}