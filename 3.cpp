#include<bits/stdc++.h>
using namespace std; 
//----------------------------------------------------------------//
//helper functions//
long long gcd(long long a, long long b)
{
    if(b==0 or a==b)return abs(a);
    return gcd(b,a%b);
}
auto Lcm=[](long long a, long long b){return a*(b/gcd(a,b));};
//----------------------------------------------------------------//
//solve function//
void solve() 
{
    long long a,b;cin >> a>>b;
    cout<<gcd(a-b,b)<<endl;
    cout<<Lcm(a,b)<<endl;
}


//----------------------------------------------------------------//
//main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test=1;
    cin>>test;
    while (test--)
    {
        solve();
    }
}