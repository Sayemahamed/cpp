#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--) 
    {
        long long a,b;
        cin >> a >> b;
        if(a>b)swap(a,b);
        if(a<=1&&b<=1)cout<<0<<endl;
        else
        cout<<((a-1)*2)+(b)<<endl;
    }
}