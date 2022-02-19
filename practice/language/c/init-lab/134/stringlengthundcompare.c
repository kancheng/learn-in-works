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
        for ( i = 0; i < n1; i++ )
        {
            if (s1[i] != s2[i])
            {
                return false;
            }
        }
    }
    return true;
}

int string_length (char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char string1[] = { 't', 'e', 's', 't', 'i', 'n', 'g', '\0'};
    char string2[] = { 't', 'e', 's', 't', 't', 'r', 'y','\0'};
    int i, j;
    int value;

    i = string_length (string1);
    printf("The length of the first string : %d \n", i);
    j = string_length (string2);
    printf("The length of the second string : %d \n", j);

    value = string_compare( string1, string2, i, j);
    if (value)
    {
        printf(" The string is the same. \n");
    }
    else
    {
        printf(" The string is not the same. \n");
    }
    system("pause");
    return 0;
}