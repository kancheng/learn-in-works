# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    float f, c;

    printf("請輸入華氏溫度 \n ==>");
    scanf("%f", &f);

    c = ( 5.0/9.0 ) * (f - 32.0);

    printf("攝氏溫度 %6.2f \n", c);


    system("pause");
    return 0;
}