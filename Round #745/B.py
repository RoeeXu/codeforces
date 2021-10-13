#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    B.py
# Author:  root
# Date:    2021-09-30 18:53:42
# Brief:
#####################################################

import sys

T = int(sys.stdin.readline().strip())

for t in range(T):
    n, m, k = list(map(int, sys.stdin.readline().strip().split(' ')))
    c = n * (n - 1) // 2
    if n == 1 and m == 0 and k > 1:
        print('YES')
    elif n - 1 <= m <= c and m == c and k > 2:
        print('YES')
    elif n - 1 <= m <= c and m != c and k > 3:
        print('YES')
    else:
        print('NO')

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

