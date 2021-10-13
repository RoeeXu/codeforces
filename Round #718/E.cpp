/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     E.cpp
* Author:   root
* Date:     2021-04-25 03:30:50
* Brief:
****************************************************/

#include <bits/stdc++.h>

using namespace std;

static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

int RES;

void dfs(int n, int k, int p, long long s, long long t, int A[200001])
{
    if(k + p > n || t > s) return;
    long long tmp = t;
    while(p < n)
    {
        dfs(n, k + 1, p, s, t, A);
        if(k + p > n || t + A[k + p - 1] > s) break;
        p += k;
        t += A[p - 1];
        cout << t << " " << p << endl;
        RES++;
    }
}

int main()
{
    int T, N, A[200001];
    long long s = 0;
    cin >> T;
    while(T--)
    {
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
            s += A[i];
        }
        s /= 2;
        RES = 1;
        dfs(N, 1, 0, s, 0, A);
        cout << RES << endl;
    }
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

/*
There can't be two i's such that ci−ci−1>2, or pi−pi−1 won't be non-increasing. And there can't be two i's such that pi−pi−1>2, or ci−ci−1 won't be non-decreasing. So for any 2≤i<m, ci−ci−1≤2, and for any 2≤i<k, pi−pi−1≤2. Then we can find out that there are only two possible patterns: PP...PCC...C or (C/P)CC...CPCPC...PCPP...P(C/P). You can calculate the first pattern in O(n) and calculate the second pattern in O(n) or O(nlogn) with two-pointers or divide-and-conquer.
*/