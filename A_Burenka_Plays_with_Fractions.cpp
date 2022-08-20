#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a == 0&&c==0)
        cout<<0<<endl;
        if((a == 0&&c!=0)||(a != 0&&c==0))
        cout<<1<<endl;
        
    }
}