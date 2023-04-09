#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//
//number theory //
template<typename T>
bool isPrime(T n){if(n<=1)return false;for (long long i=2;i*i<=n;++i){if(!(n%i))return false;}return true;}
template<typename T>
long long factorial(T N){ long long ans=1;while(N>1)ans*=N--;return ans;}
template<typename T,typename Y>
long long NCR(T N,Y R){ long long ans=1,tmp=N-R;while(N>1){ans*=N--;while(R>1 and !(ans%R))ans/=R--; while(tmp>1 and !(ans%tmp))ans/=tmp--;}return ans;}
template<typename T,typename Y>
long long NPR(T N,Y R){ long long ans=1,tmp=N-R;while(N>1){ans*=N--;while(tmp>1 and !(ans%tmp))ans/=tmp--;}return ans;}
void sieve(vector<bool>&ans){ans[0]=ans[1]=false; long long tmp=sqrt(ans.size()),till=ans.size();for(long long i=2;i<=tmp;i++)if(ans[i])for(long long j=i*i;j<till;j+=i)ans[j]=false;}
template<typename T>
map<long long, long long> primeFactors(T N){map<long long, long long> ans;long long till = sqrt(N);for (long long i = 2; i <= till; i++){while (!(N % i)){ans[i]++;N /= i;}if (i >= N or i >= till)break;}if (N > 1)ans[N]++;return ans;}
//number theory//
//----------------------------------------------------------------//
//data types//

//----------------------------------------------------------------//
// helper functions //
vector<bool>dat(3007,true);

//----------------------------------------------------------------//
// solve function//
void solve()
{
    vector<long long>primeCollection;
    for(int i=0; i<dat.size(); i++){
        if(dat[i])primeCollection.push_back(i);
    }
    long long n,ans=0;cin>>n;
    for(long long i=0;i<=n;i++){
        map<long long ,long long>data;
        for(auto&it:primeCollection)
        if(!(i%it))data[it]++;
        if(data.size()==2)ans++;
    }
    cout<<ans<<endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    sieve(dat);
    // cin >> test;
    while (test--)
    {
        solve();
    }
}