#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    E.py
# Author:  root
# Date:    2021-10-10 18:23:33
# Brief:
#####################################################

import sys
import collections
import bisect

def nc2(n):
    return n * (n - 1) // 2

n, m, q = [int(x) for x in sys.stdin.readline().strip().split(' ')]
board = collections.defaultdict(list)
stand = {}
visit = set()
res = m * n
for i in range(n + 1, 1, -1):
    # start with (i-1,1), down first
    g = min(n - i + 1, m - 1)
    # end point
    x, y = i - 1 + g, 1 + g 
    # if can be down more
    if x < n: 
        x += 1
    # away from start
    v = x - i + 1 + y - 1
    # value range list
    board[2 - i] = [-1, v + 1]
    # stair numbers
    res += nc2(v + 1)
    # start point
    stand[2 - i] = (i - 1, 1)
for j in range(1, m + 1):
    # start with (1,j), right first
    g = min(n - 1, m - j)
    x, y = 1 + g, j + g
    if y < m:
        y += 1
    v = x - 1 + y - j
    board[j] = [-1, v + 1]
    res += nc2(v + 1)
    stand[j] = (1, j)
    
# print(stand)
# print(board)
# print(res)

def delta(idx, v):
    if v < 0:
        return 0
    p = bisect.bisect_left(board[idx], v)
    if v == board[idx][p]:
        # add
        l, r = board[idx][p - 1], board[idx][p + 1]
        board[idx].pop(p)
        return nc2(r - l - 1) - nc2(v - l - 1) - nc2(r - v - 1)

    else:
        # del
        bisect.insort_left(board[idx], v)
        assert v == board[idx][p]
        l, r = board[idx][p - 1], board[idx][p + 1]
        return - nc2(r - l - 1) + nc2(v - l - 1) + nc2(r - v - 1)

for _ in range(q):
    a, b = [int(x) for x in sys.stdin.readline().strip().split(' ')]
    
    # first stair
    idx = b - a + 1
    v = b - stand[idx][1] + a - stand[idx][0]
    res += delta(idx, v)

    # second stair
    idx = b - a
    v = b - stand[idx][1] + a - stand[idx][0]
    res += delta(idx, v)
    
    # single stair
    if (a, b) in visit:
        res += 1
        visit.remove((a, b))
    else:
        res -= 1
        visit.add((a, b))

    # print res
    print(res)
        

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

