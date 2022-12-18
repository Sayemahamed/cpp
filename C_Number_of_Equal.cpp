#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long first, second, i = 0, j = 0,ans=0;
    cin >> first >> second;
    vector <long long> data(first);
    for (auto &it : data)cin >> it;
    while (second--)
    {
        long long x;
        cin >> x;
        while (i<first and data[i]<x)i++;
        while (j<first and data[j]<=x)j++;
        ans+=j-i;
    }
    cout<<ans;
}