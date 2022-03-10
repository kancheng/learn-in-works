# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i, j, k, sum;
    char ch1, ch2;
    float x1, x2, ave;

    printf("輸入兩字元\n ==>");
    scanf("%c%c", &ch1, &ch2);
    printf("反向輸出兩字元\n ==>");
    printf("%c%c", ch2, ch1);

    printf("輸入三個整數\n ==>");
    scanf("%d %d %d", &i, &j, &k);
    sum = i + j + k;
    printf(" 總和是 ==> %d \n", sum);
    printf("請輸入 2 個浮點數 \n ==>");
    scanf("%f %f", &x1, &x2);
    ave = (x1 +x2)/ 2.0;
    printf("平均是 ==> %6.2f\n", ave);
    system("pause");
    return 0;
}