# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# define MAX
# define MAXIMUM( x, y) ( x > y ) ? x : y
# define MINIMUM( x, y) ( x > y ) ? y : x

int main()
{
    int a = 10;
    int b = 20;
    #ifdef MAX
        printf("MAX : %d\n", MAXIMUM(a,b));
    #else
        printf("MIN : %d\n", MINIMUM(a,b));
    #endif
    #ifndef MIN
        printf("MIN : %d\n", MINIMUM(a,b));
    #else
        printf("MAX : %d\n", MAXIMUM(a,b));
    #endif
    #undef MAX
    #ifdef MAX
        printf("MAX : %d\n", MAXIMUM(a,b));
    #else
        printf("MIN : %d\n", MINIMUM(a,b));
    #endif
    #define MIN
    #ifndef MIN
        printf("MIN : %d\n", MINIMUM(a,b));
    #else
        printf("MAX : %d\n", MAXIMUM(a,b));
    #endif
    system("pause");
    return 0;   
}

 
