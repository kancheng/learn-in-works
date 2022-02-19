# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# define PI 3.1415926
# define R 3.0

int main()
{
    float area, circle;
    area = PI * R * R;
    circle = 2 * PI * R;
    printf("Area of a circle : %8.4f \n", area);
    printf("Circumference : %8.4f \n", circle);
    system("pause");
    return 0;
}