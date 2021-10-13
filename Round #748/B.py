#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    B.py
# Author:  root
# Date:    2021-10-14 00:20:44
# Brief:
#####################################################

import sys

T = int(sys.stdin.readline().strip())

for t in range(T):
    s = sys.stdin.readline().strip()
    n = len(s)
    res = 1e9
    # 25 75 50 00
    for aim in ['25', '75', '50', '00']:
        p = 1
        q = n - 1
        while p >= 0 and q >= 0:
            if aim[p] == s[q]:
                p -= 1
                q -= 1
            else:
                q -= 1
        if p < 0:
            res = min(res, n - q - 3)
    print(res)


# vim: set expandtab ts=4 sw=4 sts=4 tw=100

