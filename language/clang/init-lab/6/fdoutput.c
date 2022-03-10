# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i;
    i = 929;
    printf(" /%d/ \n", i);
    printf(" /%2d/ \n", i);
    printf(" /%5d/ \n", i);
    printf(" /%-5d/ \n", i);
    printf(" /%+5d/ \n", i);
    printf(" /%05d/ \n", i);
    system("pause");
    return 0;
}