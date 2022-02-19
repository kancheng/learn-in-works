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
        float ave;
        char sex;
    } w;
    w.math = 80;
    w.english = 85;
    w.computer = 83;
    w.ave = (float)(w.math + w.english+ w.computer)/3.0;
    w.sex = 'M';
    printf(" Name | Sex | Math | English | Computer | Average \n");
    printf(" Owo | %c | %d | %d | %d | %5.2f \n", w.sex, w.math, w.english, w.computer, w.ave);
    system("pause");
    return 0;   
}

 
