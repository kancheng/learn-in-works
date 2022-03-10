# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    int count = 0;
    char ch;
    printf("Please enter any any English letters or numbers :\n");
    while((ch = getche())!='\r')
    {
        isalnum(ch) ? (count++) : (count = count);
    }
    printf("The number of English letters or numbers is %d .\n", count);
    system("pause");
    return 0;
}