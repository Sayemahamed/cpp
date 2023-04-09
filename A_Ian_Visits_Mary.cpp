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
    long long x, y;cin >> x >> y;
    if(x<=1 and y<=1){
        cout<<1<<endl;
        cout<<x<<" "<<y<<endl;
    }
    else {
        cout<<2<<endl;
        cout<<1<<' '<<y-1<<endl;
        cout<<x<<' '<<y<<endl;
    }
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