# include <math.h>
# include <stdio.h>
# include <stdlib.h>
typedef float tmp;

int main()
{
    tmp f,c;
    printf("Please enter the temperature in Fahrenheit: \n");
    scanf("%f", &f);
    c = ( 5.0 / 9.0 ) * ( f - 32.0);
    printf("Output Celsius temperature %6.2f \n", c);
    system("pause");
    return 0;   
}

 
