#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long customers,i=0,j=9;
    cin>>customers;
    string s,ans="0000000000";
    cin>>s;
    for(auto&it:s)
    {
        if(it=='L')
        {
            while(ans[i]=='1' and i<10)i++;
            ans[i]='1';
        }
        else if(it=='R')
        {
            while(ans[j]=='1' and j>=0)j--;
            ans[j]='1';
        }
        else
        {
                ans[it-'0']='0';
                i=min(i,(long long)(it-'0'));
                j=max(j,(long long)(it-'0'));
        }
    }
    cout<<ans<<endl;
}