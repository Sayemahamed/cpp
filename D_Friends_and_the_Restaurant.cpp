#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long friends,ans=0;
        cin >> friends;
        pair<long long, long long> data[friends];
        vector<long long> credit;
        for (auto &it : data)
            cin >> it.first;
        for (auto &it : data)
            cin >> it.second;
        for (long long i = 0; i < friends; i++)
        {
            credit.push_back( data[i].second - data[i].first);
        }
        sort(credit.begin(), credit.end());
        // for (auto &it : credit)
        //     cout << it << ' ';
        // cout<< endl;
        long long mid=lower_bound(credit.begin(),credit.end(),0)-credit.begin();
        if(mid==0)
        {cout<<(friends>>1)<<endl;continue;}
        else if(mid==friends-1)
        {cout<<0<<endl;continue;}
        else 
        {
        }
        // cout << mid << endl;
    }
}