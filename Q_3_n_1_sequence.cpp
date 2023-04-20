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
long long magicSequence(unsigned long long value){
    if(value==1)return 1;
    if(value&1)return 1+magicSequence(3*value +1);
    return 1+magicSequence(value/2);
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    unsigned long long value;cin>>value;
    cout<<magicSequence(value)<<endl;
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