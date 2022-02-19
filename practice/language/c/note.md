# C & C++

將 GCC 環境安裝完成後，執行如下。

## 編譯與執行

### C

```
> gcc -o [File Name] [File Name].cpp
> ./[File Name]
```

```
# include <stdio.h>
int main (int argc, const char *argv[]){
    printf("Hello, World!");
    return 0;
}
```

```
# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int i;

    i=27;
    printf("First - I am Kan. \n");
    printf("Second - I am %d years old. \n", i);
    printf("Third \n");
    system("pause");
    return 0;
}
```

### C++

```
> g++ -o [File Name] [File Name].cpp
> ./[File Name]
```

```
# include <cstdlib>
# include <iostream>
using namespace std;

int main()
{
    cout << "Hello," << endl
         << "world !" << endl;
    system("pause");
    return 0;
}
```
