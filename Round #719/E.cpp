/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     E.cpp
* Author:   root
* Date:     2021-05-05 23:27:01
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
long long solve(int n, string s)
{
    vector<int> t;
    for(int i = 0; i < n; i++)
        if(s[i] != '.') t.push_back(i);
    if(t.size() < 2) return 0;
    long long m = t.size();
    long long aim = t[m / 2];
    long long recharge = (m * m - (m % 2)) / 4;
    long long res = -recharge;
    for(auto x : t) res += abs(x - aim);
    return res;
}

int main() {
    int T, N;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> N;
        cin >> s;
        long long res = solve(N, s);
        cout << res << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

