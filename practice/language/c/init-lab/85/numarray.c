# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
float avg(var, num)
int var[];
int num;
{
    float ave = 0.0;
    int i;
    for ( i = 0; i < num; i++ )
    {
        ave += var[i];
    }
    ave/=(float)num;
    return ave;
}
int main()
{
    int array[5];
    float average;
    int i;
    for ( i = 0; i < 5; i++) 
    {
        printf("Please enter the number %d : ", i+1);
        scanf("%d", &array[i]);
    }
    average = avg(array, 5);
    printf("The average number is %6.2f \n",average);
    system("pause");
    return 0;
}