# C

## 編譯與執行

不編譯成可執行檔(exeutable file)，可編譯成一個目的地檔(object file)。

```
gcc -c [File Name].c -o [File Name].o
clang -c [File Name].c -o [File Name].o
```

```
gcc [File Name 1].o [File Name 2].o -o [File Name]
clang [File Name 1].o [File Name 2].o -o [File Name]
```