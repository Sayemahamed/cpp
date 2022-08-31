#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(long long i=0; i<n; i++)
        {
            if(s1[i]=='G')s1[i]='B';
            if(s2[i]=='G')s2[i]='B';
        }
        if(s1==s2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
