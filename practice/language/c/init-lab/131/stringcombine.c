# include <stdio.h>
# include <stdlib.h>

void str_con(char s1[], char s2[], char s3[], int n1, int n2)
{
    int j;
    for ( j = 0 ; j < n1 ; j++ ) 
    {
        s3[j] = s1[j];
    }
    for ( j = n1 ; j < n1 + n2 ; j++ )
    {
        s3[j] = s2[j - n1];
    }
}

int main()
{
    char str1[3] = { 'K', 'a', 'n'};
    char str2[9] = { 'H', 'a', 'o', '-', 'C', 'h', 'e', 'n', 'g'};
    char str3[13];
    int i;

    str_con ( str1, str2, str3, 5, 9);
    for ( i = 0; i < 13; i++ ) 
    {
        printf("%c", str3[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}