/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     A.cpp
* Author:   root
* Date:     2021-05-07 22:36:43
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
int main() {
    int T;
    long long A, B;
    cin >> T;
    while (T--)
    {
        cin >> A >> B;
        if (B == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        long long x, y, z;
        int flag = 0;
        for(int k = 1; k < 1000; k++)
        {
            z = A * B * k;
            for(long long i = 1; i < B * k; i++)
            {
                if(i % B == 0) continue;
                x = A * i;
                y = A * (B * k - i);
                if(x != y && y != z && z != x && x + y == z)
                {
                    cout << "YES" << endl;
                    cout << x << " " << y << " " << z << endl;
                    flag = 1;
                }
                if(flag) break;
            }
            if(flag) break;
        }
    }
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

