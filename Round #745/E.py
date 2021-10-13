#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    E.py
# Author:  root
# Date:    2021-09-30 19:55:54
# Brief:
#####################################################

import sys

n, m = list(map(int, sys.stdin.readline().strip().split(' ')))
model = []
for i in range(n):
    x, y = list(map(int, sys.stdin.readline().strip().split(' ')))
    model.append([x, y])
ops = []
for i in range(m):
    x, y = list(map(int, sys.stdin.readline().strip().split(' ')))
    ops.append([x, y])
res = []
graph = {}
for op, k in ops:
    if op == 1:
        x, y = model[k - 1]
        graph[k] = [x, y, x, y]
    else:
        if k in graph:
            del graph[k]
    r = 0
    for k in graph:
        if graph[k][0] == 0 and graph[k][1] == 1:
            r += 1
            graph[k][0] = graph[k][2]
            graph[k][1] = graph[k][3]
        elif graph[k][0] == 0 and graph[k][1] > 1:
            r += 1
            graph[k][1] -= 1
        else:
            graph[k][0] -= 1
    res.append(r)
for x in res:
    print(x)

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

