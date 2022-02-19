# include <math.h>
# include <stdio.h>
# include <stdlib.h>

int main()
{
    enum week { SUN, MON, TUE, WED, THR, FRI, SAT };
    enum week day;
    int total, pay, hour;
    total = 0;
    printf("Please enter the number of working hours per day of the week : \n");
    for ( day = SUN; day <= SAT; day++ )
    {
        scanf("%d", &hour);
        switch ( day ) 
        {
            case SUN : pay = hour * 120;
                break;
            case SAT : pay = hour * 110;
                break;
            default : pay = hour * 90;
                break;
        }
        total += pay;
    }
    printf(" A week's salary is %d USD \n", total);
    system("pause");
    return 0;
}