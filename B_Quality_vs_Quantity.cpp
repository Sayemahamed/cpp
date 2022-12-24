#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long size, sum = 0, flag = false, i = 0, j = 0;
        cin >> size;
        vector<long long> data(size);
        j = size;
        for (auto &it : data)
            cin >> it;
        sort(data.begin(), data.end());
        while(j>=i)
        {
            sum-=data[i++];
            if(sum>0) break;
            if(j>i)
            sum+=data[--j];
        }
        if (sum > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}