#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while   (t--)
    {
        long long n;
        cin>>n;
        map<char,int>data[n];
        cin.ignore();
        for(long long i=0;i<n;i++)
        {
        char str[1000000];
        scanf("%[^\n]",str);
        //cin.ignore();
        cout<<str<<endl;
        // for(long long j=0;j<str.size();j++)
        // {
        //     if(str[j]!=' ')
        //     data[i][str[j]]=0;
        // }
        // for(auto it:data[i])
        // {
        //     cout<<it.first<<"";
        // }
        // cout<<endl;
        }
    }
}