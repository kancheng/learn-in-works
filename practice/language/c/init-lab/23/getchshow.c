# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    char ch1, ch2;

    printf("輸入 2 個字元\n ==>");
    ch1 = getch();
    ch2 = getch();

    printf("\n");
    printf("第 1 個字元\n ==>");
    putchar(ch1);
    printf("\n");
    printf("第 2 個字元\n ==>");
    putchar(ch2);
    printf("\n");
    system("pause");
    return 0;
}