# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int maximum(int var[], int number)
{
    int max, i;
    max = var[0];
    for (i = 0;  i < number; i++)
    {
        if (var[i]> max)
        {
            max = var[i];
        }
    }
    return max;
}

int main()
{
    static int array1[5] = { 134, 211, 122, 333, 237};
    static int array2[4] = { 132, 123, 37, 98};
    printf("The maximum value of 'array1' array is %d.\n", maximum(array1,5));
    printf("The maximum value of 'array2' array is %d.\n", maximum(array2,4));
    system("pause");
    return 0;
}