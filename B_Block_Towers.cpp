#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long size,ans=0;
        cin >> size;
        vector<long long> data(size);
        for (auto &it : data)
        {
            cin >> it;
        }
        long long ab=(accumulate(data.begin(), data.end(), 0))/size;
        for(auto &it : data)
        {
            ans+=abs(ab-it);
        }
        cout << accumulate(data.begin(), data.end(), 0) << endl;
    }
}