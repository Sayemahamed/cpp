#include <bits/stdc++.h>
using namespace std;
bool prime[100000017];
int main()
{
    vector<long long> dat;
    prime[0] = prime[1] = true;
    for (long long i = 2; i < 100000009; i++)
    {
        if (!prime[i])
        {
            for (long long j = i * i; j < 100000009; j += i)
            {
                prime[j] = true;
            }
            if(i!=2)
            dat.push_back(i);
        }
    }
    // for(auto &it : dat)cout <<it<<' ';
    cout<<dat.size()<<endl;
    long long test=0;
    cin >> test;
    while (test--)
    {
        long long x, flag = true;
        cin >> x;
        for (auto &i : dat)
        {
            if (i > x)
                break;
            if (!(x % i) and i!=2)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}