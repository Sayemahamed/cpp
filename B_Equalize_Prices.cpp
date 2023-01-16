#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long items, threshold, mn = INT64_MAX, mx = INT64_MIN;
        cin >> items >> threshold;
        vector<long long> dat(items);
        for (auto &it : dat)
        {
            cin >> it;
            if(it>mx)mx = it;
            if(it<mn)mn = it;
        }
        if(mx-mn > 2*threshold)
        cout<<-1<<endl;
        else 
        cout<<mn+threshold<<endl;
    }
}