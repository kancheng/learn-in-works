# C & C++

將 GCC 環境安裝完成後，執行如下。

## 編譯與執行

### C

```
> gcc -o [File Name] [File Name].c
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

### C 兩個檔案編譯

```
> gcc -o [File Name] [File Name 1].c [File Name 2].c
> ./[File Name]
```

1. hello.c

```
# include <stdio.h>
int find_max (int arr[], int n);
int main (int argc, const char *argv[]){
    int arr[] = { 1, 8, 6, 3, 4};
    int m = find_max( arr, 5);
    printf("max = %d\n", m);
    return 0;
}
```

2. tool.c

```
# include <stdio.h>
int find_max (int arr[], int n) {
    int i;
    int m = arr[0];
    for (i = 0; i < n; i++ ) {
        if (arr[i] > m) {
            m = arr[i];
        }
    }
    return m;
}
```

在此主檔案是 hello.c  要叫入 tool.c 則要在主檔案 `hello.c` 中進行宣告 `int find_max (int arr[], int n);`。

```
> gcc hello.c tool.c -o hello
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

### Make & Makefile

說明

```
Target: Dependencies
[ Tab ] Command
```

1. Target: 要編譯的目標文件，所想要編譯的東西

2. Dependencies: 文件依賴， Target 會依賴哪些文件

3. Tab: 命令的前面必須是 Tab

4. Command: 要編譯的命令


平常 C 的編譯的流程

```
> gcc -o [File Name] [File Name].c
> ./[File Name]
```

```
# include <stdio.h>
int main (int argc, const char *argv[]){
    printf("Hello, World!");
    return 0;
}
```

Makefile 最後的編寫如下
    
```
hello: hello.c
	gcc hello.c -o hello 

```

hello 為目標文件，該目標依賴於 hello.c ， 最後通過 gcc hello.c -o hello 命令來編譯，最後到該目錄上使用命令 make 即可。

```
make
```
### Make & Makefile - 兩個 C 檔案編譯

```
> make
```

1. hello.c

```
# include <stdio.h>
int find_max (int arr[], int n);
int main (int argc, const char *argv[]){
    int arr[] = { 1, 8, 6, 3, 4};
    int m = find_max( arr, 5);
    printf("max = %d\n", m);
    return 0;
}
```

2. tool.c

```
# include <stdio.h>
int find_max (int arr[], int n) {
    int i;
    int m = arr[0];
    for (i = 0; i < n; i++ ) {
        if (arr[i] > m) {
            m = arr[i];
        }
    }
    return m;
}
```

在此 Makefile 結構是由下而上。

3. Makefile

```
hello: hello.c tool.o
    gcc hello.c tool.o -o hello
tool.o: tool.c
    gcc -c tool.c
```

4. 拆成指令

```
> gcc -c tool.c
> gcc hello.c tool.o -o hello
```

### Make & Makefile - 編譯後的 make clean

編譯完後會產生很多編譯後的檔案，可用 clean 的方式來清除。

```
hello: hello.c tool.o
    gcc hello.c tool.o -o hello

tool.o: tool.c
    gcc -c tool.c

clean:
    rm *.o hello
```

### C 語言的 .h 和 .o

1. hello.c

```
# include "foo.h"
# include "bar.h"
# include <stdio.h>
int main (int argc, const char *argv[]){
    int arr[] = { 1, 8, 6, 3, 4};
    int min = find_min( arr, 5);
    int max = find_max( arr, 5);
    printf("max = %d\n", max);
    printf("min = %d\n", min);
    return 0;
}
```

2. foo.c

```
# include "foo.h"
int find_max (int arr[], int n) {
    int i;
    int m = arr[0];
    for (i = 0; i < n; i++ ) {
        if (arr[i] > m) {
            m = arr[i];
        }
    }
    return m;
}
```

3. foo.h

```
int find_max (int arr[], int n);
```

### Make 設置變量

預防檔案改錯，好維護。

```
CC = gcc
CFLAGS = -lm -Wall -g

hello: hello.c foo.o bar.o
    $(CC) $(CFLAGS) hello.c foo.o bar.o -o hello

foo.o: foo.c
    $(CC) $(CFLAGS) -c foo.c

bar.o: bar.c
    $(CC) $(CFLAGS) -c bar.c

clean:
    rm *.o hello
```

### Make 編譯兩個檔案


hello_max.c & hello_min.c

```
CC = gcc
CFLAGS = -lm -Wall -g

all: hello_max hello_min

hello_max: hello_max.c foo.o bar.o
    $(CC) $(CFLAGS) hello_max.c foo.o bar.o -o hello_max
hello_min: hello_min.c foo.o bar.o
    $(CC) $(CFLAGS) hello_min.c foo.o bar.o -o hello_min
foo.o: foo.c
    $(CC) $(CFLAGS) -c foo.c

bar.o: bar.c
    $(CC) $(CFLAGS) -c bar.c

clean:
    rm *.o hello_max hello_min
```


## CMake 的使用

CMake 用途可以用來編譯 C++ 程式檔，使之可以去產生自己的函式庫。

1. 靜態函式庫 `*.a` 就是一堆 `*.o` Object 的集合

2. 共享函式庫 `*.so` e.g. OpenCV, PCL 點雲處理函式庫，編譯完就是一堆 `*.so` 檔案，當自己在寫 Main 程式時會再去連結他。

3. 有時候會去連結第三方函式庫 OpenCV, PCL library

### Ex 1 - p1

Cpp 一般的 gcc 編譯方式。

```
g++ hello.cpp -o hello
```

1. helllo.cpp

```
#include <iostream>
using namespace std;

int main (int argc, char** argv) {
    cout << "Hello OwO//" << endl;
    return 0;
}
```

### Ex 2 - p2

在專案中建立好 build 目錄，CMakeLists.txt 檔案，檔案中的 hello 就是 hello.cpp 。最後進入 build 執行指令。 `cmake .. `

建立 build 的好處是可以將編譯過程的產生的檔案跟原本的檔案分開來。

```
mkdir build
cd build
cmake ..
make
```

1. hello.cpp

```
#include <iostream>
using namespace std;

int main (int argc, char** argv) {
    cout << "Hello OwO//" << endl;
    return 0;
}
```

2. CMakeLists.txt

```
cmake_minimum_required(VERSION 2.8.9)
project (hello)
add_executable(hello helloworld.cpp)
```

### Ex 3 - p3

產生自己的靜態函式庫 `*.a` or 共享函式庫 `*.so`。

多處情況是人家將開發好的 Library 編好成 `*.so` 後給我們使用，然後再給 `*.h` 宣告函式，方便給我們調用。(e.g. OpenCV, PCL library)

靜態函式庫 `*.a` & 共享函式庫 `*.so` ，前者每次使用會產生一個副本，後者只會有一個 `*.so`。


Tip 1: 靜態函式庫

```
mkdir build
cd build
cmake ..
make
```

1. CMakeLists.txt

```
cmake_minimum_required(VERSION 2.8)
project (useHello)

# 靜態函式庫
add_library(hello libHello.cpp)
# 共享函式庫
#add_library(hello_shared SHARED libHello.cpp)

add_executable(useHello useHello.cpp)

# 共享函式庫 Link
#target_link_libraries(useHello hello_shared)
# 靜態函式庫 Link
target_link_libraries(useHello hello)
```

2. libHello.cpp    

```
#include <iostream>
using namespace std;

void printHello () {
    cout << "Hello OwO//" << endl;
}
```

3. libHello.h

```
#ifndef LIBHELLO_H_
#define LIBHELLO_H_
void printHello();

#endif
```
4. useHello.cpp

```
#include "libHello.h"

int main (int argc, char** argv) {
    printHello();
    return 0;
}
```

### Ex 4 - p4

```
mkdir build
cd build
cmake ..
make
```

Tip 2: 共享函式庫

1. CMakeLists.txt

```
cmake_minimum_required(VERSION 2.8)
project (useHello)

# 共享函式庫
add_library(hello_shared SHARED libHello.cpp)

add_executable(useHello useHello.cpp)

# 共享函式庫 Link
target_link_libraries(useHello hello_shared)
```

