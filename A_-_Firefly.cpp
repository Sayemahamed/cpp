#include<bits/stdc++.h>
using namespace std;
    vector<long long>downDanger,downSafe;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long pools,width;
    cin>>pools>>width;
    for(long long i=0;i<pools;i++)
    {
        long long n;cin>>n;
        if(i&1)
        downSafe.push_back(width-n);
        else
        downDanger.push_back(n);
    }
    map<long long,long long>ans;
    for(long long i=1 ;i<=width;i++)
    {
        long long temp=0;
        temp+=lower_bound(downDanger.begin(),downDanger.end(),i)-downDanger.begin();
        temp+=downSafe.size()-(lower_bound(downSafe.begin(),downSafe.end(),i)-downSafe.begin());
        ans[temp]++;
    }
    cout<<ans.begin()->first<<" "<<ans.begin()->second<<endl;
}