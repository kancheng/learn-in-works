# include <stdio.h>
# include <stdlib.h>

int main()
{
    char string[] = "Hello !";
    int i = 0;

    while (string[i] != '\0')
    {
        printf("%c", string[i++]);
    }
    printf("\n");
    system("pause");
    return 0;
}