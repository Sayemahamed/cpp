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
string getString(long long n){
    string ans = "";
    while(n--)ans+='B';
    return ans;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long qur,siz;cin >> qur>>siz;
    string str=getString(siz);
    while(qur--){
        long long x;cin >> x;
        x=min(x,siz-x+1);
        if(str[x-1]=='B')str[x-1]='A';
        else{
            x=max(x,siz-x+1);
            str[x-1]='A';
        }
    }
    cout<<str<<endl;
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