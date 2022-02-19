# include <math.h>
# include <stdio.h>
# include <stdlib.h>
int main()
{
    struct score {
        int math;
        int english;
        int computer;
    };
    struct score hung, chen;
    hung.math = 80;
    hung.english = 85;
    hung.computer = 83;
    chen.math = 80;
    chen.english = 85;
    chen.computer = 83;
    printf(" Name | Math | English | Computer \n");
    printf("  Kan | %d | %d | %d \n", hung.math, hung.english, hung.computer);
    printf("  Hao | %d | %d | %d \n", chen.math, chen.english, chen.computer);
    system("pause");
    return 0;   
}

 
