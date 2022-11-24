#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n, mx = 0, mx1 = 0,flag=true;;
        cin >> n;
        vector<long long> data(n), test;
        for (auto &it : data)
        {
            cin >> it;
            if (it > mx)
                mx = it;
        }
        test = data;
        for (auto &it : test)
        {
            if(flag&&it==mx)
            {
                it=0;
                flag=false;
            }
            if (it > mx1)
                mx1 = it;
        }
        for (auto &it : data)
        {
            if (it != mx)
                cout << it - mx << ' ';
            else
                cout << it - mx1 << ' ';
        }
        cout << endl;
    }
}