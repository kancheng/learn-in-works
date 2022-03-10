# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int x, y, z;

    x = y = z = 0;
    x = ++y + ++z;
    printf("Line 11 %d %d %d\n", x, y, z);
    x = y++ + z++;
    printf("Line 13 %d %d %d\n", x, y, z);

    x = y = z = 0;
    x = --y + --z;
    printf("Line 17 %d %d %d\n", x, y, z);
    x = y-- + z--;
    printf("Line 19 %d %d %d\n", x, y, z);
    
    system("pause");
    return 0;
}