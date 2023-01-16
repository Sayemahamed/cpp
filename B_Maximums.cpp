#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long siz, chage;
    cin >> siz;
    vector<long long> dat(siz);
    for (auto &it : dat)
        cin >> it;
    chage = dat[0];
    for (long long i = 1; i < siz; i++)
    {
        dat[i] += chage;
        chage = max(dat[i] , chage);
    }
    for (auto &it : dat)
        cout << it << ' ';
    cout << endl;
}