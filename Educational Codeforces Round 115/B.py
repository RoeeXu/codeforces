#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    B.py
# Author:  root
# Date:    2021-10-10 17:17:08
# Brief:
#####################################################

import sys

T = int(sys.stdin.readline().strip())

for t in range(T):
    n = int(sys.stdin.readline().strip())
    grid = [[int(x) for x in sys.stdin.readline().strip().split(' ')] for i in range(n)]
    valid_two = set([(i, j) for j in range(5) for i in range(5) if i < j])
    cnt = [0 for i in range(5)]
    for i in range(n):
        for a in range(5):
            for b in range(a + 1, 5):
                if (a, b) in valid_two and grid[i][a] == grid[i][b] == 0:
                    valid_two.remove((a, b))
        for j in range(5):
            cnt[j] += grid[i][j]
    valid_day = set(i for i in range(5) if cnt[i] >= n // 2)
    flag = 0
    for a, b in valid_two:
        if a in valid_day and b in valid_day:
            flag = 1
            break
    print("YES" if flag else "NO")

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

