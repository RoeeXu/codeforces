/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     C.cpp
* Author:   root
* Date:     2021-04-25 02:03:31
* Brief:
****************************************************/

#include <bits/stdc++.h>

using namespace std;

static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

vector<pair<int, int>> P = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};

void work(int B[501][501], int i, int N)
{
    int aim = B[i][i], x = i, y = i, t = B[i][i] - 1;
    while(t--)
    {
        for(auto& [a, b] : P)
        {
            x += a;
            y += b;
            if(y >= 0 && x < N && x > y && B[x][y] == 0)
            {
                B[x][y] = aim;
                break;
            }
            else
            {
                x -= a;
                y -= b;
            }
        }
    }
}

int main()
{
    int N, B[501][501];
    cin >> N;
    memset(B, 0, sizeof(B));
    for(int i = 0; i < N; i++) cin >> B[i][i];
    for(int i = 0; i < N; i++)
        work(B, i, N);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cout << B[i][j];
            if(j < i) cout << " ";
            else cout << endl;
        }
    }
    return 0;
}


/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */
