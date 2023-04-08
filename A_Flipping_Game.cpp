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
    long long siz,ans=0,cnt=0,tmp=0;cin>>siz;
    vector<int>dat(siz);
    for(auto&it:dat){cin>>it;if(it)ans++;}
    for(long long i=0;i<siz;i++){
        long long j=i;cnt=0;
        while(j<siz){
            if(dat[j++]==0){
                cnt++;
            }
            else cnt--;
            tmp=max(tmp,cnt);
        }
    }if(tmp==0)cout<<ans-1<<endl;else
    cout<<ans+tmp<<endl;
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