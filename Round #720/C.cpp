/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     C.cpp
* Author:   root
* Date:     2021-05-08 01:32:30
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
int main() {
    int N, T, t;
    cin >> T;
    while (T--)
    {
        cin >> N;
        vector<int> a(N + 1);
        int idx = -1;
        for(int i = 1; i + 1 <= N; i += 2)
        {
            cout << "? 2 " << i << " " << i + 1 << " 1" << endl;
            cout.flush();
            cin >> t;
            if (t == 1) 
            {
                idx = i;
                break;
            }
            else if (t == 2)
            {
                cout << "? 2 " << i + 1 << " " << i << " 1" << endl;
                cout.flush();
                cin >> t;
                if (t == 1)
                {
                    idx = i + 1;
                    break;
                }
            }
        }
        if(idx == -1) idx = N;
        a[idx] = 1;
        for(int i = 1; i <= N; i++)
            if(idx != i)
            {
                cout << "? 1 " << idx << " " << i << " " << N - 1 << endl;
                cout.flush();
                cin >> t;
                a[i] = t;
            }
        cout << "! ";
        for(int i = 1; i <= N; i++) cout << a[i] << " ";
        cout << endl;
        cout.flush();
    }
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

