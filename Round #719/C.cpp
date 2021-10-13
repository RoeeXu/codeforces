/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     C.cpp
* Author:   root
* Date:     2021-05-05 22:59:57
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

vector<vector<int>> solve(int n)
{
    if(n == 1) return {{1}};
    else if(n == 2) return {{-1}};
    else if(n == 3) return {{2,9,7},{4,6,3},{1,8,5}};
    else if(n == 4) return {{1,3,5,7},{14,8,12,9},{16,10,6,11},{4,2,15,13}};
    vector<vector<int>> res;
    vector<int> r;
    for(int j = 1; j <= n; j += 2)
        r.push_back(j);
    for(int j = 2; j <= n; j += 2)
        r.push_back(j);
    res.push_back(r);
    for(int i = 1; i < n; i++)
    {
        vector<int> r;
        for(int j = 0; j < n; j++) r.push_back(res[res.size() - 1][j] + n);
        res.push_back(r);
    }
    return res;
}
 
int main() {
    int T, N;
    cin >> T;
    while(T--)
    {
        cin >> N;
        vector<vector<int>> res = solve(N);
        for(int i = 0; i < res.size(); i++)
        {
            for(int j = 0; j < res[0].size(); j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

