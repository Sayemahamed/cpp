#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sticks,a=0,b=0,i=0;
    cin >> sticks;
    vector<long long> dat(sticks);
    for(auto &it:dat)cin>>it;
    sort(dat.begin(),dat.end());
    while(i<sticks/2)a+=dat[i++];
    while(i<sticks)b+=dat[i++];
    cout<<a*a+b*b<<endl;
}