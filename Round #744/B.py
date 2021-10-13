#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    B.py
# Author:  root
# Date:    2021-09-29 00:15:24
# Brief:
#####################################################

import sys

T = int(sys.stdin.readline().strip())

for t in range(T):
    n = int(sys.stdin.readline().strip())
    a = list(map(int, sys.stdin.readline().strip().split(' ')))
    res = 0
    ops = []
    for i in range(n - 1):
        min_v = 1000000001
        min_p = -1
        for j in range(i, n):
            if a[j] < min_v:
                min_v = a[j]
                min_p = j
        if min_p != i:
            res += 1
            ops.append([i + 1, min_p + 1, min_p - i])
            a = a[:i] + [a[min_p]] + a[i:min_p] + a[min_p + 1:]
    print(res)
    for op in ops:
        print(' '.join(map(str, op)))

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

