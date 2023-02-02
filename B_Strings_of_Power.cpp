#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin >> s;
    long long ans=0,k=0;
    for(long long i=0;i<s.length()-4;i++)
    if(s.substr(i,5)=="heavy")k++;
    else if(s.substr(i,5)=="metal")ans+=k;
    cout<<ans<<endl;
}