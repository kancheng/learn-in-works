# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    char *str;

    if ( (str = (char *) malloc(80*sizeof(char))) == NULL)
    {
        printf("It cannot get memory space. \n");
        exit(1);
    }

    printf("Get the input sentence. \n");
    gets(str);
    printf("The sentence that entered is ... \n");
    puts(str);
    system("pause");
    return 0;
}