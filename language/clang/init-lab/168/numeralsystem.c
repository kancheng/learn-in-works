# include <stdio.h>
# include <stdlib.h>

struct pack_field
{
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:2;
    unsigned int index:3;
};
int main()
{
    struct pack_field var1;

    printf("Please enter 8-bit Hexadecimal :  ");
    scanf("%2x", &var1);
    printf("field 1 = %x \n", var1.f1);
    printf("field 2 = %x \n", var1.f2);
    printf("field 3 = %x \n", var1.f3);
    printf("type = %x \n", var1.type);
    printf("index  = %x \n", var1.index);
    system("pause");
    return 0;
}