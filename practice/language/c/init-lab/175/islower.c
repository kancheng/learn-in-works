# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    int count = 0;
    int ch;

    while ((ch = getche()) != '\r')
    {
        if (islower(ch))
        {
            count++;
        }
    }
    printf("\n The number of lowercase characters is %d. \n", count);
    system("pause");
    return 0;
}