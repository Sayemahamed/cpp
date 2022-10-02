#include<bits/stdc++.h> 
using namespace std;
int main()
{
    long long t,a;
    cin >> t;
    string s;
    a=t;
    map<string,long long> data;
    while (t--) 
    {
        cin >>s;
        data[s]++;
    }
    for(auto it:data)
    {
        if(it.second > a/2)
        cout<<it.first;
    }
}