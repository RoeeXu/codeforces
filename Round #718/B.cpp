/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     B.cpp
* Author:   root
* Date:     2021-04-25 01:32:15
* Brief:
****************************************************/

#include <bits/stdc++.h>

using namespace std;

static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

void work(vector<vector<int>>& res, vector<vector<int>>& b, int p)
{
    int x = -1, r = 1e9 + 1;
    for(int i = 0; i < b.size(); i++)
    {
        if(r > b[i][0])
        {
            r = b[i][0];
            x = i;
        }
    }
    for(int i = 0; i < b.size(); i++)
    {
        if(i == x)
        {
            res[i][p] = b[i][0];
            b[i].erase(b[i].begin());
        }
        else
        {
            res[i][p] = b[i][b[i].size() - 1];
            b[i].pop_back();
        }
    }
}

int main()
{
    int T, N, M;
    cin >> T;
    while(T--)
    {
        cin >> N >> M;
        vector<vector<int>> res(N, vector<int>(M, 0));
        vector<vector<int>> b(N, vector<int>(M, 0));
        vector<int> v;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++) cin >> b[i][j];
            sort(b[i].begin(), b[i].end());
        }
        for(int i = 0; i < M; i++)
            work(res, b, i);
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                cout << res[i][j];
                if (j < M - 1) cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */
