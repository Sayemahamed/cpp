#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,sum1=0,sum2=0;
    cin >> t;
    vector<long long> v;
    for (int i = 0; i < t; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }    
    while(v.size())
    {
        if(!v.empty())
        if(v[0]>v[v.size()-1])
        {
            sum1 += v[0];
            v.erase(v.begin());
        }
        else
        {
        sum1 += v[v.size()-1];
        v.pop_back();
        }
        if(!v.empty())
        if(v[0]>v[v.size()-1])
        {
            sum2 += v[0];
            v.erase(v.begin());
        }
        else
        {
        sum2 += v[v.size()-1];
        v.pop_back();
        }
    }
    cout << sum1<<" "<<sum2<<endl;
}