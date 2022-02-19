# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    char i;
    i = 'a';
    printf(" /%c/ \n", i);
    printf(" /%3c/ \n", i);
    printf(" /%-3c/ \n", i);
    system("pause");
    return 0;
}