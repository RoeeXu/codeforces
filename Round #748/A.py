#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    A.py
# Author:  root
# Date:    2021-10-14 00:14:08
# Brief:
#####################################################

import sys

T = int(sys.stdin.readline().strip())

for t in range(T):
    a, b, c = map(int, sys.stdin.readline().strip().split(" "))
    res = []
    for x in [[a,b,c], [b,c,a], [c,a,b]]:
        res.append(max(x[1] - x[0], x[2] - x[0], -1) + 1)
    print(' '.join(map(str, res)))

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

