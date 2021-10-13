#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    D.py
# Author:  root
# Date:    2021-10-10 17:51:47
# Brief:
#####################################################

import sys
import collections

T = int(sys.stdin.readline().strip())

for t in range(T):
    n = int(sys.stdin.readline().strip())
    graph = collections.defaultdict(list)
    cnt = collections.defaultdict(int)
    for i in range(n):
        a, b = list(map(int, sys.stdin.readline().strip().split(' ')))
        graph[a].append(b)
        cnt[b] += 1
    res = 0
    for a, vs in graph.items():
        m = len(vs)
        for x in vs:
            res += (cnt[x] - 1) * (m - 1)
    print(n*(n-1)*(n-2)//6 - res)
        

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

