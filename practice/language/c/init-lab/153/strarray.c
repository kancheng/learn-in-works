# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char str[3][80] = {
        "Rust Introduction",
        "This book is important.",
        "by Kan"
    };

    puts(str[0]);
    puts(str[1]);
    puts(str[2]);
    
    system("pause");
    return 0;
}