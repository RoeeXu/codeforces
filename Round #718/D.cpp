/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     D.cpp
* Author:   root
* Date:     2021-04-25 02:43:54
* Brief:
****************************************************/

#include <bits/stdc++.h>

using namespace std;

static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

vector<pair<int, int>> P = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};

void work(vector<vector<int>>& dp, vector<vector<int>>& A, int n, int m)
{
    vector<vector<int>> new_dp(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            new_dp[i][j] = 1e9;
            for(auto& [a, b] : P)
                if(i + a >= 0 && i + a < n && j + b >= 0 && j + b < m)
                    new_dp[i][j] = min(new_dp[i][j], dp[i + a][j + b] + A[2 * i + a][2 * j + b]);
        }
    }
    dp = new_dp;
}

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    vector<vector<int>> dp(N, vector<int>(M, 0));
    vector<vector<int>> A(2 * N, vector<int>(2 * M, 0));
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M - 1; j++)
            cin >> A[2 * i][2 * j + 1];
    for(int i = 0; i < N - 1; i++)
        for(int j = 0; j < M; j++)
            cin >> A[2 * i + 1][2 * j];
    if(K % 2 == 1)
    {
        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
            {
                cout << -1;
                if(j < M - 1) cout << " ";
                else cout << endl;
            }
        return 0;
    }
    K /= 2;
    while(K--)
        work(dp, A, N, M);
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
        {
            cout << 2 * dp[i][j];
            if(j < M - 1) cout << " ";
            else cout << endl;
        }
    return 0;
}








/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */
