#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long t;
    cin >> t;
    while (t--) 
    {
        long long a,b,d;
        cin >> a >> b >> d;
        if(!(abs(a-b)%(2*d)))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}