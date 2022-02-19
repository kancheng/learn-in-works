# include <math.h>
# include <stdio.h>
# include <stdlib.h>
int main()
{
    struct score {
        int math;
        int english;
        int computer;
    } h, c;
    h.math = 80;
    h.english = 85;
    h.computer = 83;
    c.math = 77;
    c.english = 65;
    c.computer = 93;
    printf(" Name | Math | English | Computer \n");
    printf("  Kan | %d | %d | %d \n", h.math, h.english, h.computer);
    printf("  Hao | %d | %d | %d \n", c.math, c.english, c.computer);
    system("pause");
    return 0;   
}

 
