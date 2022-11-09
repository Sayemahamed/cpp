#include<bits/stdc++.h>
using namespace std;
 
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define int long long
#define ld long double
#define pb push_back
#define all(n) (n).begin(), (n).end()
const ld pie = 3.1415926535897932384626;
void SievePrime(int n)
{  // non-prime -> 0 , prime -> 1
    bool mark[n+1]={0}; // initailly let all are non prime
    mark[2]=1;
    for(int i=3;i<=n;i+=2) // mark all odd no's as prime initially 
    mark[i]=1;
    // thus evens are remains non-prime 
    // 1. optimisation is to iterate over only odd no's (2 and its evens(multiples) are already 0)
    for(int i=3;i<=sqrt(n);i+=2) // skipping even no's
    {   // mark all the multiples of i as non-prime
        for(int j=i*i;j<=n;j+=2*i) // multiples of i before i^2 are already marked and only iterating over multiples if i that are odd no's
        {
            mark[j]=0;
        }
    }
    
    for(int i=2;i<=n;i++)
    {
        if(mark[i]==1)
        cout<<i<<" ";
    }
    cout<<endl;
}
int gcd(int a,int b)
{
 if(b==0)
 return a;
 return gcd(b,a%b);
}
void solve()
{
 int n; cin >> n;
    vector<pair<int,int>> ans;
    int bi = 0, ni = 3 * n - 1;
    while (bi<ni) {
        ans.push_back({bi, ni});
        ni -= 3;
        bi += 3;
    }
    cout <<ans.size()<<"\n";
    for (auto e : ans) cout << e.first+1 << ' ' << e.second+1 << '\n';
}
int32_t main(){
fast
 int t;
 cin>>t;
 for(int i=1;i<=t;i++)
 {
    solve();
//    cout<<'\n';
 }
	return 0;
}