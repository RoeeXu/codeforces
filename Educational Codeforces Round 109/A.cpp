/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     A.cpp
* Author:   root
* Date:     2021-05-16 22:09:05
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
        int t = gcd(100, N);
        cout << 100 / t << endl;
    }
    return 0;
}

/*
3
3
100
25
*/

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

