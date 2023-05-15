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
long long dp(vector<vector<long long>>&dat,vector<vector<long long>>&ans,long long idxI,long long idxJ){
    if(idxI==0)return dat[idxI][idxJ];
    if(ans[idxI][idxJ])return ans[idxI][idxJ];
    long long tmp=0;
    for(long long i=0;i<3;i++){
        if(i!=idxJ and idxI>0){
            tmp=max(dp(dat,ans,idxI-1,i)+dat[idxI][idxJ],tmp);
        }
    }
    ans[idxI][idxJ]=tmp;
    return ans[idxI][idxJ];
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long days;cin>>days;
    vector<vector<long long>>day,ans;
    for(long long i=0;i<days;i++){
        vector<long long>tmp;
        long long x;
        for(long long j=0;j<3;j++){
            cin>>x;
            tmp.push_back(x);
        }
        day.push_back(tmp);
    }
    for(long long i=0;i<days;i++){
        vector<long long>tmp;
        for(long long j=0;j<3;j++){
            tmp.push_back(0);
        }
        ans.push_back(tmp);
    }
    long long Ans=0;
    for(long long i=0;i<3;i++){
        Ans=max(dp(day,ans,days-1,i),Ans);
    }
    cout<<Ans<<endl;
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