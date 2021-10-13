#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    C.py
# Author:  root
# Date:    2021-10-10 17:30:03
# Brief:
#####################################################

import sys
import collections

T = int(sys.stdin.readline().strip())

def equal(x, y):
    return abs(x - y) < 1e-6

for t in range(T):
    n = int(sys.stdin.readline().strip())
    arr = [int(x) for x in sys.stdin.readline().strip().split(' ')]
    aim = 0
    cnt = collections.defaultdict(int)
    for x in arr:
        aim += x
        cnt[x] += 1
    aim *= 2
    aim /= n
    brr = sorted(cnt.keys())
    n = len(brr)
    res = 0
    mid = int(round(aim) // 2)
    if equal(mid * 2, aim) and mid in cnt:
        res += cnt[mid] * (cnt[mid] - 1) // 2
    l, r = 0, n - 1
    while l < r:
        tmp = brr[l] + brr[r]
        if equal(tmp, aim):
            res += cnt[brr[l]] * cnt[brr[r]]
            l += 1
            r -= 1
        elif tmp < aim:
            l += 1
        else:
            r -= 1
    print(res)

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

