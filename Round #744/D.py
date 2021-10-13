#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    D.py
# Author:  root
# Date:    2021-09-29 00:33:04
# Brief:
#####################################################

import sys
import bisect

T = int(sys.stdin.readline().strip())

for t in range(T):
    n = int(sys.stdin.readline().strip())
    a = list(map(int, sys.stdin.readline().strip().split(' ')))
    b = []
    for i, c in enumerate(a):
        if c != 0:
            b.append([c, i])
    b = sorted(b)
    ops = []
    while len(b) > 1:
        head = b[-2]
        tail = b[-1]
        b.pop(-1)
        b.pop(-1)
        n, idx = head
        m, idy = tail
        for _ in range(n):
            ops.append([idx + 1, idy + 1])
        if m != n:
            bisect.insort_left(b, [m - n, idy])
    print(len(ops))
    for op in ops:
        print(' '.join(map(str, op)))


# vim: set expandtab ts=4 sw=4 sts=4 tw=100

