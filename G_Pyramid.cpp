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
void print(long long value,long long maxValue){
    if(value==maxValue+1)return;
    for(long long i=0;i<maxValue-value;i++)cout<<' ';
    for(long long i=0;i<2*value-1;i++)cout<<'*';
    cout<<endl;
    print(value+1,maxValue);
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz;cin>>siz;
    print(1,siz);
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