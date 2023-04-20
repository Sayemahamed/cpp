#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //
long long memory[100];
long long fib(long long n){
    if(memory[n])return memory[n];
    if(n<=1)return 0;
    if(n==2)return 1;
    memory[n]=fib(n-1)+fib(n-2);
    return memory[n];
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long n;cin>>n;
    cout<<fib(n)<<endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
}