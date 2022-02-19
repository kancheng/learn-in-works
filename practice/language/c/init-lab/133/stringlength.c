# include <stdio.h>
# include <stdlib.h>

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
    char string2[] = { 't', 'e', 's', 't', '\0'};
    int j = 0;

    j = string_length (string1);
    printf("The length of the first string : %d \n", j);
    j = string_length (string2);
    printf("The length of the second string : %d \n", j);
    system("pause");
    return 0;
}