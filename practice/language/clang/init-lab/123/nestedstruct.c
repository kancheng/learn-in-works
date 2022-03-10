# include <math.h>
# include <stdio.h>
# include <stdlib.h>
int main()
{
    struct grade {
        int score;
        char grade;
    };
    struct score
    {
        struct grade math;
        struct grade english;
        struct grade computer;
    } h;
    h.math.score = 92;
    h.math.grade = 'A';
    h.english.score = 85;
    h.english.grade = 'B';
    h.computer.score = 67;
    h.computer.grade = 'A';
    printf(" The score of math :  %d \n" , h.math.score);
    printf(" The grade of math :  %c \n" , h.math.grade);
    printf(" The score of english :  %d \n" , h.english.score);
    printf(" The grade of english :  %c \n" , h.english.grade);
    printf(" The score of computer :  %d \n" , h.computer.score);
    printf(" The grade of computer :  %c \n" , h.computer.grade);
    system("pause");
    return 0;
}

 
