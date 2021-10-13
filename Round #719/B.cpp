/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     B.cpp
* Author:   root
* Date:     2021-05-05 22:49:08
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

int main() {
    vector<int> num;
    int t = 0;
    for(int i = 1; i < 10; i++)
    {
        t = t * 10 + 1;
        for(int j = 1; j < 10; j++)
            num.push_back(t * j);
    }
    sort(num.begin(), num.end());
    int T, N;
    cin >> T;
    while(T--)
    {
        cin >> N;
        int pos = upper_bound(num.begin(), num.end(), N) - num.begin();
        cout << pos << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

