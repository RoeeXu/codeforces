#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    A.py
# Author:  root
# Date:    2021-09-29 00:07:02
# Brief:
#####################################################

import sys

T = int(sys.stdin.readline().strip())

for t in range(T):
    s = sys.stdin.readline().strip()
    n = [0, 0, 0]
    for c in s:
        idx = ord(c) - ord('A')
        if idx < 0 or idx > 2:
            continue
        n[idx] += 1
    if n[1] == n[0] + n[2]:
        print('YES')
    else:
        print('NO')
        

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

