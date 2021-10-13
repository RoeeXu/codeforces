/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     C.cpp
* Author:   root
* Date:     2021-04-30 17:24:29
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

void add_to(vector<long long>& arr, vector<long long>& res)
{
    sort(arr.begin(), arr.end(), greater<long long>());
    int m = arr.size();
    for(int i = 1; i < m; i++) arr[i] += arr[i - 1];
    for(int k = 1; k <= m; k++) res[k - 1] += arr[m / k * k - 1];
}

int main() {
    int T, N;
    long long tmp;
    cin >> T;
    while(T--)
    {
        cin >> N;
        unordered_map<int, vector<long long>> uni;
        vector<int> u(N);
        for(int i = 0; i < N; i++) cin >> u[i];
        for(int i = 0; i < N; i++)
        {
            cin >> tmp;
            uni[u[i]].push_back(tmp);
        }
        vector<long long> res(N, 0);
        for(auto& [key, arr] : uni)
            add_to(arr, res);
        cout << res[0];
        for(int i = 1; i < N; i++) cout << " " << res[i];
        cout << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */
