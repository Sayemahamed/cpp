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
//number theory //
template<typename T>
bool isPrime(T n){if(n<=1)return false;for (long long i=2;i*i<=n;++i){if(!(n%i))return false;}return true;}
template<typename T>
long long factorial(T N){ long long ans=1;while(N>1)ans*=N--;return ans;}
template<typename T,typename Y>
long long NCR(T N,Y R){ if(N<R)return 0; long long ans=1,tmp=N-R;while(N>1){ans*=N--;while(R>1 and !(ans%R))ans/=R--; while(tmp>1 and !(ans%tmp))ans/=tmp--;}return ans;}
template<typename T,typename Y>
long long NPR(T N,Y R){ if(N<R)return 0; long long ans=1,tmp=N-R;while(N>1){ans*=N--;while(tmp>1 and !(ans%tmp))ans/=tmp--;}return ans;}
void sieve(vector<bool>&ans){ans[0]=ans[1]=false; long long tmp=sqrt(ans.size()),till=ans.size();for(long long i=2;i<=tmp;i++)if(ans[i])for(long long j=i*i;j<till;j+=i)ans[j]=false;}
template<typename T>
map<long long, long long> primeFactors(T N){map<long long, long long> ans;long long till = sqrt(N);for (long long i = 2; i <= till; i++){while (!(N % i)){ans[i]++;N /= i;}if (i >= N or i >= till)break;}if (N > 1)ans[N]++;return ans;}
//number theory//

//----------------------------------------------------------------//
// solve function//
void solve()
{
    vector<bool> ans1(100007,true);
    sieve(ans1);
    vector<long long >ans,primeNumbers;
    for(int i=0;i<ans1.size();i++){
        if(ans1[i])primeNumbers.push_back(i);
    }
    long long number,need;
    cin>>number>>need;
    for(auto&it:primeNumbers){
        while(number%it==0){
            ans.push_back(it);
            number/=it;
        }
    }
    if(number!=1)ans.push_back(number);
    if(ans.size()<need)cout<<-1;
    else{
        long long theNum=1;
        for(auto&it:ans){
            need--;
            if(need>0) 
            cout<<it<<" ";
            else theNum*=it;
        }
        cout<<theNum<<" ";
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