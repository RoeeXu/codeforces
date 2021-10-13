/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     A.cpp
* Author:   root
* Date:     2021-05-05 22:38:10
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

bool solve(int n, string s)
{
    unordered_set<char> save;
    save.insert(s[0]);
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i - 1]) continue;
        if(save.count(s[i])) return false;
        save.insert(s[i]);
    }
    return true;
}
 
int main() {
    int T, N;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> N;
        cin >> s;
        int flag = solve(N, s);
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

