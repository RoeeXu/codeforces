/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     B.cpp
* Author:   root
* Date:     2021-05-07 22:51:49
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
        vector<int> a(N);
        for(int i = 0; i < N; i++) cin >> a[i];
        vector<vector<int>> op;
        for(int i = 0; i < N - 1; i++)
        {
            if(gcd(a[i], a[i + 1]) != 1)
            {
                if(a[i] <= a[i + 1])
                {
                    op.push_back({i+1, i+2, a[i], a[i]+1});
                    a[i+1] = a[i]+1;
                }
                else
                {
                    if(i == 0)
                    {
                        op.push_back({1, 2, a[1]+1, a[1]});
                        a[0] = a[1]+1;
                    }
                    else
                    {
                        for(int b = a[i+1]+1; b <= 2000000000; b++)
                        {
                            if(gcd(b, a[i+1]) == 1 && gcd(b, a[i-1]) == 1)
                            {
                                op.push_back({i+1, i+2, b, a[i+1]});
                                a[i] = b;
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout << op.size() << endl;
        for(auto& x : op)
        {
            for(auto y : x)
                cout << y << " ";
            cout << endl;
        }
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

