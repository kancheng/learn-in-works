# -*- coding: utf-8 -*-
import time
def Add_N(n1):
    total = 0
    for a in range(1, n1 + 1) :
        total = total + a
    return total
N = 10000
t1 = time.process_time()
print ('1 - %d 自然數累加結果為%d ' %(N, Add_N(N)))
t2 = time.process_time()
print ('循環累加算法用時 : %.8f 秒' % (t2 - t1))
# (n * ( n + 1)) / 2
# 累加公式
t3 = time.process_time()
print('採用累加公式計算 1 到 %d 累加和為 %d' %(N, N * (N + 1)/2))
t4 = time.process_time()
print('循環累加算法時間 : %.8f 秒'%(t4 - t3))