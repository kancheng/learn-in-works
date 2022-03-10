# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int score[3], i, num;

    printf("Please enter the number of students : ");
    scanf("%d", &num);

    for ( i = 0; i < num; i++ )
    {
        printf("Please enter the score : ");
        scanf("%d", &score[i]);
      //  sum += score[i];
    }
    for ( i = 0; i < num; i++ )
    {
        printf("%d, The student's grade is %d . \n", i+1, score[i]);
    }
    system("pause");
    return 0;
}