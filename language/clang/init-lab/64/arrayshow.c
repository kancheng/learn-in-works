# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int score[10], i, sum, num;
    float ave;
    sum = 0;
    printf("Please enter the number of students : ");
    scanf("%d", &num);
    for ( i = 0; i < num; i++ )
    {
        printf("Please enter the score : ");
        scanf("%d", &score[i]);
        sum += score[i];
    }
    ave = (float) sum / (float) num;
    printf("The average score is %6.2f . \n", ave);
    system("pause");
    return 0;
}