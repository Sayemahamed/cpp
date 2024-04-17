#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag =false;
    string s[4];
    for (int i = 0; i < 4; ++i) 
    {
        cin >>s[i];
        // cout<<s[i]<<endl;
    }
    for(int i = 0; i < 3; ++i)
    {
        long long count = 0;
        if(s[i][i]=='.')count++;
        if(s[i][i+1]=='.')count++;
        if(s[i+1][i]=='.')count++;
        if(s[i+1][i+1]=='.')count++;
        if(count>2)flag=true;
    }    
    for(int i = 0; i < 3; ++i)
    {
        long long count = 0;
        if(s[i][i]=='#')count++;
        if(s[i][i+1]=='#')count++;
        if(s[i+1][i]=='#')count++;
        if(s[i+1][i+1]=='#')count++;
        if(count>2)flag=true;
    }
        for(int i = 0; i < 1; ++i)
    {
        long long count = 0;
        if(s[i+2][i]=='.')count++;
        if(s[i+2][i+1]=='.')count++;
        if(s[i+1+2][i]=='.')count++;
        if(s[i+1+2][i+1]=='.')count++;
        if(count>2)flag=true;
    }    
    for(int i = 0; i < 1; ++i)
    {
        long long count = 0;
        if(s[i+2][i]=='#')count++;
        if(s[i+2][i+1]=='#')count++;
        if(s[i+1+2][i]=='#')count++;
        if(s[i+1+2][i+1]=='#')count++;
        if(count>2)flag=true;
    }
    if(flag)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}