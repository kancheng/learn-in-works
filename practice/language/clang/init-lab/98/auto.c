# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    int i, num;
    num = 2;
    for ( i = 0; i < 3; i++) 
    {
        printf ("Outside number : %d \n", num);
        num++;
        {
            auto int num = 1;
            printf ("Inside number : %d \n", num);
            num++;
        }
    }
    system("pause");
    return 0;
}