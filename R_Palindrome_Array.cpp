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
bool isPalindrome(vector<long long>&dat,long long i,long long j){
    if(j<i)return true;
    if(dat[i]!=dat[j])return false;
    return isPalindrome(dat,i+1,j-1);
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz;cin>>siz;
    vector<long long>dat(siz);
    for(auto&it:dat)cin>>it;
    if(isPalindrome(dat,0,siz-1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
    // cin >> test;
    while (test--)
    {
        solve();
    }
}