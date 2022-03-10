# include <math.h>
# include <stdio.h>
# include <stdlib.h>

int main()
{
    union utype
    {
        int i;
        char ch;
    } data;
    data.i = 0x5566;
    printf(" data.i = %04x\n", data.i);
    data.ch = 'A';
    printf(" data.ch = %c\n", data.ch);
    printf(" data.i = %04x\n", data.i);
    system("pause");
    return 0;
}

 
