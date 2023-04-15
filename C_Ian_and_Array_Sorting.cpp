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
    long long siz;cin>>siz;
    vector<long long>dat(siz);
    for(auto&it:dat)cin>>it;
    if(is_sorted(dat.begin(),dat.end())){
        cout<<"YES"<<endl;
    }else if(siz<3){
        cout<<"NO"<<endl;
    }
    else if(is_sorted(dat.rbegin(),dat.rend())){
        cout<<"YES"<<endl;
    }
    else{
        long long n=is_sorted_until(dat.begin(),dat.end())-dat.begin();
        n=is_sorted_until(dat.begin()+n,dat.end())-dat.begin();
        if(n>=siz)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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