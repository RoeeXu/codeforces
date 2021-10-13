#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    D.py
# Author:  root
# Date:    2021-10-14 00:47:57
# Brief:
#####################################################

import sys
from math import gcd

T = int(sys.stdin.readline().strip())

for t in range(T):
    n = map(int, sys.stdin.readline().strip().split(" "))
    a = list(map(int, sys.stdin.readline().strip().split(" ")))
    z = min(a)
    b = [x - z for x in a if x != z]
    if len(b) == 0:
        print(-1)
    elif len(b) == 1:
        print(b[0])
    else:
        res = gcd(b[0], b[1])
        for x in b[2:]:
            res = gcd(res, x)
        print(res)

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

