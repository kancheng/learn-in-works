# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int pwd, spwd;
    printf("Please set your password :");
    scanf("%d", &spwd);
    printf("Please enter your password :");
    scanf("%d", &pwd);

    while (pwd != spwd)
    {
        printf("Error, Please re-enter the correct password :");
        scanf("%d", &pwd);
    } 
    
    printf("This is the correct password.");
    return 0;
}