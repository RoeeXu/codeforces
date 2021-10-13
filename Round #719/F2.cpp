/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     F2.cpp
* Author:   root
* Date:     2021-05-06 00:18:36
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
int solve(map<pair<int, int>, int>& save, int l, int r, int k)
{
    int m = (l + r) / 2, num, cnt;
    while(l < r)
    {
        if(save.count({l, m}))
        {
            cnt = save[{l, m}];
        }
        else
        {
            cout << "? " << l << " " << m << endl;
            cout.flush();
            cin >> num;
            cnt = m - l + 1 - num;
            save[{l, m}] = cnt;
            if(save.count({l, r}) && !save.count({m+1, r}))
                save[{m+1, r}] = save[{l, r}] - cnt;
        }
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
    return l;
}

void process(map<pair<int, int>, int>& save, int pos)
{
    for(auto [x, v] : save)
        if(x.first <= pos && pos <= x.second) save[x]--;
        else if(x.first > pos) break;
}

int main() {
    int N, k, T;
    map<pair<int, int>, int> save;
    cin >> N >> T;
    while(T--)
    {
        cin >> k;
        if(N == 1)
        {
            cout << "! 1" << endl;
            cout.flush();
            continue;
        }
        int pos = solve(save, 1, N, k);
        process(save, pos);
        cout << "! " << pos << endl;
        cout.flush();
    }
    return 0;
    
    
    
    
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

