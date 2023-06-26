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
    long long tsondu,tenzing;cin>>tsondu>>tenzing;
    unsigned long long a=0,b=0,x;
    while(tsondu--){cin>>x;a+=x;}
    while(tenzing--){cin>>x;b+=x;}
    if(a==b)cout<<"Draw"<<endl;
    else if(a>b)cout<<"Tsondu"<<endl;
    else cout<<"Tenzing"<<endl;
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