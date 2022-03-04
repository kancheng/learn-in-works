# Test Tool


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





