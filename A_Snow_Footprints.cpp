#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,f1=true,f2=true;
    cin >> t;
    string s;
    cin >> s;
    if(s.find("R")!=-1)
    for(long long i = 0; i <= t; ++i)
    {
        if((s[i]=='R')&&f1)
        {
            cout<<i+1<<" ";
            f1=false;
        }
        if((s[i]=='L'||s[i]=='.')&&f2&&!f1)
        {
            if(s[i]=='.')i++;
            cout<<i;
            f2=false;
        }
    }
    else{
        long long i=0;
    while(s[0]=='.')s.erase(s.begin()),i++;
    cout<<s.find('.')+i<<" "<<i<<endl;
    }

}