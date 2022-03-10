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
        char sex;
    };
    float ave;
    struct score w  = { 77, 84, 95, 'M'};
    ave = (float)(w.math + w.english+ w.computer)/3.0;
    printf(" Name | Sex | Math | English | Computer | Average \n");
    printf(" Owo | %c | %d | %d | %d | %5.2f \n", w.sex, w.math, w.english, w.computer, ave);
    system("pause");
    return 0;   
}

 
