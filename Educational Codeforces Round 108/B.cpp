/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     B.cpp
* Author:   root
* Date:     2021-04-30 17:14:42
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
int main() {
    int T, N, M, K;
    cin >> T;
    for(int t = 1; t <= T; t++)
    {
        cin >> N >> M >> K;
        if(N * M - 1 == K) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

