# include <stdio.h>
# include <stdlib.h>

int string_compare (char s1[], char s2[], int n1, int n2)
{
    int i;
    int true = 1;
    int false = 0;
    if ( n1 != n2 )
    {
        return false;
    }
    else
    {
        for ( i = 0 ; i < n1 ; i++ )
        {
            if ( s1 [i] != s2 [i] )
            {
                return false;
            }
        }
        
    }
    return true;
}

int main()
{
    char string1[4] = { 't', 'e', 's', 't'};
    char string2[4] = { 't', 'e', 's', 't'};
    int value;
    value = string_compare( string1, string2, 4, 4);
    if (value) 
    {
        printf(" The string is the same. \n");
    }
    else
    {
        printf(" The string is not the same. \n");
    }

    printf("\n");
    system("pause");
    return 0;
}