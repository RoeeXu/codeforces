/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     A.cpp
* Author:   root
* Date:     2021-05-20 22:44:36
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
int main() {
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        if (N == 0) cout << 0 << endl;
        else cout << (int)pow(2, int((log(N) / log(2)) + 1e-5)) - 1 << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

