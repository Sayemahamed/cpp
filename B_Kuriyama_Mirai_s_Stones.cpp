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
    multiset<long long>dat;
    vector<long long>ans1(siz+1,0),ans2(siz+1,0);
    int i=1;
    while(siz--){
        cin>>ans1[i];
        dat.insert(ans1[i]);
        ans1[i]+=ans1[i-1];
        i++;
    }
    i=1;
    for(auto&it:dat){
        ans2[i]=it;
        ans2[i]+=ans2[i-1];
        i++;
    }
    cin>>i;
    while(i--){
        long long x,l,r;cin>>x>>l>>r;
        if(x==1){
            long long tmp=ans1[r];
            tmp-=ans1[l-1];
            cout<<tmp<<endl;
        }
        else{
            long long tmp=ans2[r];
            tmp-=ans2[l-1];
            cout<<tmp<<endl;
        }
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