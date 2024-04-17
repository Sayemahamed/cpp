#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long ans=0,pre1=1,pre2=1,st=0,nd=0;
    cin >> str;
    for(auto it:str)
    {
        while(pre1!=(it-96))
        {
            pre1++;
            st++;
            if(pre1>26)pre1=1;
        }
        while(pre2!=(it-96))
        {
            pre2--;
            nd++;
            if(pre2<1)pre2=26;
        }
        if(nd<st)
        {
            ans+=nd;
            nd=0;
            st=0;
        }
        else
        {
            ans+=st;
            nd=0;
            st=0;           
        }
    }
    cout<<ans<<endl;
}