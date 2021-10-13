#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    A.py
# Author:  root
# Date:    2021-10-10 17:07:02
# Brief:
#####################################################

import sys

T = int(sys.stdin.readline().strip())

for t in range(T):
    n = int(sys.stdin.readline().strip())
    grid = [sys.stdin.readline().strip(), sys.stdin.readline().strip()]
    flag = 1
    for i in range(n):
        if grid[0][i] == '1' and grid[1][i] == '1':
            flag = 0
            break
    print("YES" if flag else "NO")
    

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

