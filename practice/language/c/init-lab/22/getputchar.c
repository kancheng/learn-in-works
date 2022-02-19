# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int main(void)
{
    char ch1, ch2, ch3;

    printf("輸入 2 個字元\n ==>");
    ch1 = getche();
    ch2 = getche();

    printf("\n");
    printf("第 1 個字元\n ==>");
    putchar(ch1);
    printf("\n");
    printf("第 2 個字元\n ==>");
    putchar(ch2);
    printf("\n 輸入 1 個字元\n ==>");
    ch3 = getchar();
    printf("第 3 個字元是 \n ==>");
    putchar(ch3);
    printf("\n");
    system("pause");
    return 0;
}