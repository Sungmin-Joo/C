# -*- coding: utf-8 -*-
import time
import os
import multiprocessing
semaphore = 0
def func(x):
    global semaphore
    while semaphore:
        pass
    semaphore = 1
    print("���μ��� id : ", os.getpid())
    print("process_list : ",x)
    semaphore = 0
    time.sleep(2)
    return

if __name__ == '__main__' :
    start = time.time()
    process_list = ['p1','p2','p3','p4']

    for _ in process_list:
        func(_)
    end = time.time()

    print('sequence programming : %s sec' %(end - start))

    start = time.time()

    p = multiprocessing.Pool(processes=4)
    p.map(func,process_list)
    p.close()
    p.join()

    print('parallel programming : %s sec' %(time.time() - start))

'''
���μ��� id :  7784
process_list :  p1
���μ��� id :  7784
process_list :  p2
���μ��� id :  7784
process_list :  p3
���μ��� id :  7784
process_list :  p4
sequence programming : 8.006831645965576 sec
���μ��� id :  8692
process_list :  p1
���μ��� id :  7412
process_list :  p2
���μ��� id :  16240
process_list :  p3
���μ��� id :  12216
process_list :  p4
parallel programming : 2.1641221046447754 sec
'''