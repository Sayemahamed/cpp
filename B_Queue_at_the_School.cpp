#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long siz,tim;
    cin>>siz>>tim;
    string s;
    cin>>s;
    while (tim-- )
    {
        for(long long i = 0; i < siz-1;i++)
        if(s[i]=='B' and s[i+1]=='G')swap(s[i],s[i++]);
    }
    cout<<s;
}