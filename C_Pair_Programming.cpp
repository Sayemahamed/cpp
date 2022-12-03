#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long size, polyCarp, monoCarp, temp, flag = false;
        cin >> size >> polyCarp >> monoCarp;
        temp = size;
        vector<long long> poly(polyCarp), mono(monoCarp), ans(polyCarp + monoCarp);
        for (auto &it : poly)
            cin >> it;
        for (auto &&it : mono)
            cin >> it;
        size += count(mono.begin(), mono.end(), 0);
        size += count(poly.begin(), poly.end(), 0);
        merge(poly.begin(), poly.end(), mono.begin(), mono.end(), ans.begin());
        for (auto it : ans)
            if (it > size)
                flag = true;
        if (flag)
        {
            cout << -1 << endl;
            continue;
        }
        for (auto it : ans)
            cout << it << ' ';
        cout << endl;
    }
}