# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main( int argc, char *argv[])
{
    int i;
    puts("The output : ");
    for ( i = 0; i < argc; i++ )
    {
        puts(argv[i]);
    }   
    system("pause");
    return 0;
}