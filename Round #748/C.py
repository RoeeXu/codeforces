#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    C.py
# Author:  root
# Date:    2021-10-14 00:31:47
# Brief:
#####################################################

import sys
import collections

T = int(sys.stdin.readline().strip())

for t in range(T):
    n, k = map(int, sys.stdin.readline().strip().split(" "))
    a = list(map(int, sys.stdin.readline().strip().split(" ")))
    s = n - 1
    cnt = collections.defaultdict(int)
    for x in a:
        cnt[n - x] += 1
    res = 0
    for k, v in sorted(cnt.items()):
        if s - k * v >= 0:
            res += v
            s -= k * v
        else:
            res += s // k
            break
    print(res)


# vim: set expandtab ts=4 sw=4 sts=4 tw=100

