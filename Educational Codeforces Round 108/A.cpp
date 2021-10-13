/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     A.cpp
* Author:   root
* Date:     2021-04-30 16:25:22
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

bool solve(int r, int b, int d)
{
    if(r > b) return solve(b, r, d);
    int n = b / r + (b % r == 0 ? 0 : 1);
    return n - 1 <= d;
}
 
int main() {
    int T, R, B, D;
    cin >> T;
    for(int t = 1; t <= T; t++)
    {
        cin >> R >> B >> D;
        if(solve(R, B, D)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

