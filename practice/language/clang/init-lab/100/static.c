# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
void varfunction ()
{
    int var = 0;
    static int static_var = 0;
    printf("var = %d \n", var);
    printf("The static -> static_var = %d \n", static_var);
    printf("\n");
    var++;
    static_var++;
}

int main()
{
    int i;
    for ( i = 0; i < 3; i++ )
    {
        varfunction();
    }
    system("pause");
    return 0;
}