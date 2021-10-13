/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     B.cpp
* Author:   root
* Date:     2021-05-20 23:07:00
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();

string work(int a, int b, bool c, bool after_reverse, bool start, int x, int y)
{
    if(a == 0 && b == 0 && c == 0)
    {
        if (x > y) return "BOB";
        else if (x < y) return "ALICE";
        else return "DRAW";
    }
    if (c == 0)
    {
        if (b > 0)
        {
            
        }
        if (a == 0)
        {
            if (start == 0) return work(0, 0, 0, 0, 0, x + 2, y);
            else return work(0, 0, 0, 0, 0, x, y + 2);
        }
    }
}
 
int main() {
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        set<int> v;
        char t;
        for(int i = 0; i < N; i++)
        {
            cin >> t;
            if (t == '0') v.insert(i);
        }
        int a = 0, b = 0;
        bool c = 0;
        for(auto x : v)
        {
            int y = N - 1 - x;
            if (y < x) break;
            if (y == x) {c = 1; continue;}
            if (v.count(y)) b++;
            else a++;
        }
        cout << work(a, b, c, 0, 0, 0, 0) << endl;
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

