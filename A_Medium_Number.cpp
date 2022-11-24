#include <bits/stdc++.h>
using namespace std;
int main()

{
    long long test;
    cin >> test;
    while (test--)
    {
        vector<long long> d(3);
        for (auto &it : d)
            cin >> it;
        sort(d.begin(), d.end());
        cout << d[1] << endl;
    }
}