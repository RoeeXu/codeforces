/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     D.cpp
* Author:   root
* Date:     2021-05-05 23:14:02
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
int main() {
    int T, N;
    cin >> T;
    while(T--)
    {
        cin >> N;
        vector<int> a(N);
        unordered_map<int, long long> cnt;
        for(int i = 0; i < N; i++)
        {
            cin >> a[i];
            a[i] -= i;
            if(cnt.count(a[i])) cnt[a[i]]++;
            else cnt[a[i]] = 1;
        }
        long long res = 0;
        for(auto [k, v] : cnt)
        {
            res += v * (v - 1) / 2;
        }
        cout << res << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

