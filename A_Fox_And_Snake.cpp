#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long n,m,cnt=0;cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        if(i&1)
        for(long long j=0;j<m;j++)cout<<'#';
        else 
        {
            if(cnt&1)cout<<'#';
            for(long long j=1;j<m;j++)cout<<'.';
            if(!(cnt&1))cout<<'#';
            cnt++;
        }
        cout<<endl;
    }
}