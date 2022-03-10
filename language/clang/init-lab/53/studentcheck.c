# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int co90, co80, co70, co60, cobelow60, number, sum, score, i;
    float ave;
    co90 = co80 = co70 = co60 = cobelow60 = sum = 0;
    printf("Please enter the number of students in the class : ");
    scanf("%d", &number);

    for ( i = 1; i <= number; i++ ) 
    {
        printf("Please enter the score of students (%d) : \n", i);
        scanf("%d", &score);
        sum += score;
        if ( score >= 90 ) 
        {
            co90++;
        } 
        else if ( score >= 80 )
        {
            co80++;
        } 
        else if ( score >= 70 )
        {
            co70++;
        } 
        else if ( score >= 60 )
        {
            co60++;
        }
        else 
        {
            cobelow60++;
        }
    }
    ave = (float) sum / (float) number;
    printf(" %d students have scores greater than 90 \n", co90);
    printf(" %d students have scores between 80 and 90. \n", co80);
    printf(" %d students have scores between 70 and 80. \n", co70);
    printf(" %d students have scores between 60 and 70. \n", co60);
    printf(" %d students have scores below 60 \n", cobelow60);
    printf(" The average number is %6.2f  \n", ave);
    system("pause");
    return 0;
}