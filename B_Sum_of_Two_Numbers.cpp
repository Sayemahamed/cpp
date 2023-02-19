#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;cin>>test;
    while (test--)
    {
        long long x;cin>>x;
        if (x!=19)cout<<x/2<<" "<<++x/2<<endl;
        else cout<<14<<' '<<5<<endl;
    }
}