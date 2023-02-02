#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;
    cin>>test;
    map<string,long long >dat;
    while(test--)
    {
        string s;cin>>s;
        dat[s]++;
        if(dat[s]>1)
        cout<<s<<dat[s]-1<<endl;
        else
        cout<<"OK"<<endl;
    }
}