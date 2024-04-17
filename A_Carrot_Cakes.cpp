#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,k,d;
    cin>>n>>t>>k>>d;
    long long x=ceil((double)d/t);
    n=n-(x*k);
    if(n>0) {
            if(d%t!=0)
                cout<<"YES"<<endl;
            else{
                if(n>k) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
    }
    else{
        cout<<"NO"<<endl;
    }
}