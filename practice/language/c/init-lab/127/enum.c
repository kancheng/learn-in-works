# include <math.h>
# include <stdio.h>
# include <stdlib.h>

int main()
{
    enum computer { basic, assembly, cobol };
    enum computer language;
    language = cobol;
    if ( language == cobol ) 
    {
        printf("COBOL \n");
    }
    else if ( language == basic )
    {
        printf("Basic \n");
    }
    printf(" %d %d %d \n", basic, assembly, cobol);
    system("pause");
    return 0;
}