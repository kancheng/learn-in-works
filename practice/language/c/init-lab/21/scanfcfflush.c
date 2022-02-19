# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i;
    char ch;

    printf("輸入 1 個整數\n ==>");
    scanf("%d", &i);
    printf("輸入 1 個字元\n ==>");
    fflush(stdin);

    scanf(" %c", &ch);

    printf("請輸入 = %d, AscII Code = %d, 字元=%c \n",i,ch,ch);

    system("pause");
    return 0;
}