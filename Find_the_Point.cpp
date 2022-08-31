#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>c)swap(a,c);
        if(b>d)swap(b,d);
        cout<<abs(a-c)+c<<" "<<abs(b-d)+d<<endl;
    }
}