# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
void fun1 ()
{
    int i = 1;
    printf("the value in fun1 function is %d. \n", i);
}
void fun2 ()
{
    int i = 2;
    printf("the value in fun2 function is %d. \n", i);
}
int main()
{
    int i = 0;
    printf("The value in main function is %d. \n", i);
    fun1();
    fun2();
    printf("the value in main function is %d. \n", i);
    fun1();
    fun2();
    system("pause");
    return 0;
}