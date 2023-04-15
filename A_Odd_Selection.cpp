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


//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long total,need;cin>>total>>need;
    long long oddCount=0,evenCount=0;
    while(total--){
        long long x;cin>>x;
        if(x&1)oddCount++;
        else evenCount++;
    }bool flag=false;
    for(long long i=1; i<=oddCount;i+=2){
        if(i>need)break;
        if(need-i<=evenCount)flag=true;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}