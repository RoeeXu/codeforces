/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     C.cpp
* Author:   root
* Date:     2021-05-20 23:35:00
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
        long long res = 0;
        int t;
        map<int, long long> save;
        for (int i = 0; i < N; i++)
        {
            cin >> t;
            if (!save.count(t))
            {
                save[t] = i + 1;
            }
            else
            {
                res += save[t] * (N - i);
                save[t] += i + 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

