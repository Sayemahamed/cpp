#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long a,b;
        cin>>a>>b;
        cout<<__gcd(a,b)<<endl;
    }
}