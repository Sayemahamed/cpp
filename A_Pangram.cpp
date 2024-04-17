#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    set<char>data;
    while(t--)
    {
        char ch;
        cin>>ch;
        ch=tolower(ch);
        data.insert(ch);
    }
    if(data.size()>25)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}