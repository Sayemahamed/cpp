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
inline long long sum(long long n){
    return (n*(n-1))/2;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long upperLimit,need;cin>>upperLimit>>need;
    bool isPossible = false;
    long long one,One;
    for(long long i=0;i<=(upperLimit+1)/2;i++){
        if(sum(i)+sum(upperLimit-i)==need){
            isPossible=true;
            one=i;
            One=upperLimit-i;
            break;
        }
    }
    if(isPossible){
        cout<<"YES"<<endl;
        while(one--)cout<<-1<<' ';
        while(One--)cout<<1<<' ';
        cout<<endl;
    }
    else cout<<"NO"<<endl;
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