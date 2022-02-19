# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{
    void draw();
    int j;
    printf("Please enter length of char : ");
    scanf("%d", &j);
    draw(j);
    system("pause");
    return 0;
}
void draw (int n) 
{
    int i;
    for ( i = 1; i <= n; i++ )
    {
        printf("a");
    }
    printf("\n");
}