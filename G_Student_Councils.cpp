#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define In1(var, n) for(int var=1;var<=n;var++)
#define In0(var, n) for(int var=0;var<n;var++)
#define haa cout<<"YES"<<endl;
#define naa cout<<"NO"<<endl;
#define sorting1(ttt, n) sort(ttt+1, ttt+n+1);
#define sorting0(ttt, n) sort(ttt, ttt+n);
ll k, n, arr[100];
bool ok(ll arr2[100], ll m)
{
    int s=0;
 
    In1(i, n)
    {
        s += min(arr[i], m);
    }
 
    if(s>=(m*k))
        return true;
    else
        return false;
}
int main ()
{
    cin>>k>>n;
    int sum = 0;
    In1(i, n)
    {
        cin>>arr[i];
        sum += arr[i];
    }
 
    ll l=0, r=sum;
 
    while(l+1<r){
        ll mid = (l+r)/2;
        if(ok(arr, mid)){
            l = mid;
        }
        else{
            r = mid;
        }
    }
 
    cout<<l<<endl;
 
    return 0;
}