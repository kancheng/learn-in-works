# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int mile, yard;
    float km;

    printf("英里碼數轉公里\n");
    printf("輸入英里 \n ==>");
    scanf("%d", &mile);
    printf("輸入碼數 \n ==>");
    scanf("%d", &yard);
    km = 1.609 * (mile + (float) yard / 1760);
    printf("結果是 %8.3f \n ==>", km);
    system("pause");
    return 0;
}