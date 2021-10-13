#! /usr/bin/env python
#-*- coding: utf-8 -*-
 
#####################################################
# Copyright (c) 2021 Roee Xu. All Rights Reserved
#####################################################
# File:    A.py
# Author:  root
# Date:    2021-09-30 18:20:37
# Brief:
#####################################################

import sys

factorial_save = [1, 1]
MOD = 1000000007

for i in range(2, 200002):
    x = factorial_save[i - 1]
    x *= i
    x %= MOD
    factorial_save.append(x)
    
inc2 = pow(2, MOD - 2, MOD)

T = int(sys.stdin.readline().strip())

for t in range(T):
    n = int(sys.stdin.readline().strip())
    print((factorial_save[2 * n] * inc2) % MOD)

# vim: set expandtab ts=4 sw=4 sts=4 tw=100

