/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     A.cpp
* Author:   root
* Date:     2021-04-25 01:22:59
* Brief:
****************************************************/

#include <bits/stdc++.h>

using namespace std;

static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

int main()
{
    int T;
    long long x;
    cin >> T;
    while(T--)
    {
        cin >> x;
        if(x % 2050 != 0) cout << -1 << endl;
        else
        {
            x /= 2050;
            int res = 0;
            while(x != 0)
            {
                res += x % 10;
                x /= 10;
            }
            cout << res << endl;
        }
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */
