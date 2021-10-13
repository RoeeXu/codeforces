/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     F1.cpp
* Author:   root
* Date:     2021-05-05 23:42:35
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
int main() {
    int N, k, T;
    cin >> N >> T >> k;
    assert(T == 1);
    if(N == 1)
    {
        cout << "! 1" << endl;
        cout.flush();
        return 0;
    }
    else if(N == k)
    {
        cout << "! " << N << endl;
        cout.flush();
        return 0;
    }
    int l = 1, r = N, m = (l + r) / 2, num, cnt;
    while(l < r)
    {
        cout << "? " << l << " " << m << endl;
        cout.flush();
        cin >> num;
        cnt = m - l + 1 - num;
        if(k > cnt)
        {
            l = m + 1;
            m = (l + r) / 2;
            k -= cnt;
        }
        else
        {
            r = m;
            m = (l + r) / 2;
        }
    }
    cout << "! " << l << endl;
    cout.flush();
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

