# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    int i = 0, j = 0;
    scanf("%d\n", &i);  
    printf("Pause...\n");
    printf("1: i = %d, j = %d\n", i, j);   
    scanf("%d", &j);
    printf("2: i = %d, j = %d\n", i, j);
    system("pause");
    return 0;
}