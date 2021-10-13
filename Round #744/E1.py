#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    E1.py
# Author:  root
# Date:    2021-09-29 00:30:15
# Brief:
#####################################################

import sys

T = int(sys.stdin.readline().strip())

for t in range(T):
    n = int(sys.stdin.readline().strip())
    a = list(map(int, sys.stdin.readline().strip().split(' ')))
    b = []
    for c in a:
        if b and c <= b[0]:
            b.insert(0, c)
        else:
            b.append(c)
    print(' '.join(map(str, b)))

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

