/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     B.cpp
* Author:   root
* Date:     2021-05-16 22:53:14
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
int main() {
    int T, N, A[51];
    cin >> T;
    while (T--)
    {
        cin >> N;
        int flag1 = 1, flag2 = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            if (A[i] != i + 1) flag1 = 0;
        }
        if (A[0] == 1 || A[N - 1] == N) flag2 = 1;
        if (flag1 == 1) cout << 0 << endl;
        else if (flag2 == 1) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

