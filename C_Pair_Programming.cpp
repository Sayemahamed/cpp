#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long size, monoCarp, polyCarp, flag = false;
        cin >> size >> monoCarp >> polyCarp;
        long long temp = size;
        queue<long long> poly, mono, ans;
        for (long long i = 0; i < monoCarp; i++)
        {
            long long x;
            cin >> x;
            if (x == 0)
                size++;
            mono.push(x);
        }
        for (long long i = 0; i < polyCarp; i++)
        {
            long long x;
            cin >> x;
            if (x == 0)
                size++;
            poly.push(x);
        }
        // cout<<size<<endl;
        while (ans.size() < monoCarp + polyCarp)
        {
            if (mono.front() > size)
            {
                flag = true;
                break;
            }
            if (poly.front() > size)
            {
                flag = true;
                break;
            }
            // if(mono.front() < poly.front())
            if (mono.front() <= temp)
            {
                ans.push(mono.front());
                mono.pop();
                temp++;
            }
            if (poly.front() <= temp)
            {
                ans.push(poly.front());
                poly.pop();
                temp++;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
            continue;
        }
        while (ans.size())
        {
            cout << ans.front() << ' ';
            ans.pop();
        }
        cout << endl;
    }
}