# Test Tool

測試效能方案筆記整理。


## Link

0. Linux Perf

https://perf.wiki.kernel.org/index.php/Main_Page

1. Cppcheck

https://cppcheck.sourceforge.io/


2. Valgrind

https://github.com/LouisBrunner/valgrind-macos

3. Instruments

4. google perftools

https://github.com/gperftools/gperftools

5. Python Profilers 分析器

https://docs.python.org/zh-cn/3.11/library/profile.html

6. Python timeit 测量小代码片段的执行时间

https://docs.python.org/zh-tw/3/library/timeit.html

7. Python pympler

https://pympler.readthedocs.io/en/latest/


## Details


### Valgrind

```
valgrind --tool=memcheck --leak-check=full ./[File Name]
```

不用让脚本启动解释器，而是直接将其作为 Valgrind 的参数来解决该问题。

```
valgrind --tool=massif python [File Name].py
```

```
massif.out.[Number] > profile.txt
```

### Python Profilers

```
import cProfile
import re
cProfile.run('re.compile("foo|bar")')
```

```
python -m cProfile t.py
```

> ncalls : 调用次数
> tottime : 在指定函数中消耗的总时间（不包括调用子函数的时间）
> percall : 是 tottime 除以 ncalls 的商
> cumtime : 指定的函数及其所有子函数（从调用到退出）消耗的累积时间。这个数字对于递归函数来说是准确的。
> percall : 是 cumtime 除以原始调用（次数）的商（即：函数运行一次的平均时间）
> filename:lineno(function) : 提供相应数据的每个函数

### Python timeit 執行時間獲取方式

1. t.py

```
import timeit

class Debug:
    def mainProgram(self):
        result = timeit.timeit(stmt="for i in range(100): print(i)", number=10)
        print(result)

main = Debug()
main.mainProgram()
```


### Python Pymler

```
pip install Pympler
```
determine how much memory specific Python objects consume, identify whether objects got leaked out of scope, and track the lifetime of objects of certain classes.

1. 確定特定的 Python 對象消耗多少內存。

2. 確定對像是否洩漏到範圍之外。

3. 跟踪某些類的對象的生命週期。


## Reference

1. https://blog.csdn.net/lkj345/article/details/50913895

2. https://docs.python.org/zh-cn/3.11/library/profile.html

3. https://www.cnblogs.com/LiuYanYGZ/p/11729938.html

4. https://groups.google.com/g/pongba/c/DGPJcJbTT5o/m/gX6dOhz2dZoJ

5. https://www.pythonheidong.com/blog/article/203110/5ddc490bf414a2e64e83/

6. https://segmentfault.com/a/1190000000370440

7. https://hackmd.io/@sysprog/gnu-linux-dev/https%3A%2F%2Fhackmd.io%2Fs%2FB11109rdg

8. https://learnku.com/articles/46663

9. https://blog.csdn.net/weiwei9363/article/details/107834706

10. https://coderzcolumn.com/tutorials/python/pympler-monitor-memory-usage-by-python-objects



