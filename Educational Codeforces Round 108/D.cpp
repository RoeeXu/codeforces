/***************************************************
* Copyright (c) 2021 Roee Xu. All Rights Reserved
****************************************************
* File:     D.cpp
* Author:   root
* Date:     2021-04-30 17:53:52
* Brief:
****************************************************/
 
#include <bits/stdc++.h>
 
using namespace std;
 
static const auto _ = []() { ios::sync_with_stdio(0); cin.tie(0); return 0; }();
 
int main() {
    int n;
    long long a[5002], b[5002], c[5002], left[5002], right[5002];
    cin >> n;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    memset(left, 0, sizeof(left));
    memset(right, 0, sizeof(right));
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
        c[i] = a[i] * b[i];
    }
    for(int i = 1; i <= n; i++) left[i] = left[i - 1] + c[i];
    for(int i = n; i >= 1; i--) right[i] = right[i + 1] + c[i];
    long long res = right[1];
    for(int l = 1; l < n; l++)
        for(int r = l + 1; r <= n; r++)
        {
            long long tmp = left[l - 1] + right[r + 1];
            for(int i = l; i <= r; i++) tmp += a[i] * b[l + r - i];
            res = max(res, tmp);
        }
    cout << res << endl;
    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100 */

