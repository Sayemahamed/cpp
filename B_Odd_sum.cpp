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
    long long siz,x,oddCount=0,ans=0;cin>>siz;
    vector<long long> odd;
    for(long long i=0;i<siz;i++){
        cin>>x;
        if(x&1){
            odd.push_back(x);
            oddCount++;
        }
        else if(x>0) ans+=x;
    }
    if(oddCount==0){
        cout<<-1<<endl;
    }else{
        sort(odd.rbegin(),odd.rend());
        ans+=odd[0];
        long long i=1;
        while(i<odd.size()-1 and odd[i]>0){
            ans+=odd[i++];
        }
        if(!(i&1) and i!=odd.size()){
            if(odd[i]+odd[i-1]>0)
            ans+=odd[i];
            else ans-=odd[i-1];
        }
        cout<<ans<<endl;
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