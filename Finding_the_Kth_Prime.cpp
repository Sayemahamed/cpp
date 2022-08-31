#include<bits/stdc++.h>
using namespace std;
const long long mx=86028121+7;
bool is_prime[mx];
long long prime[mx];
int main()
{
    is_prime[0]=is_prime[1]=true;
    for(long long i=2,k=0; i<mx; i++)
    {
        if(!is_prime[i])
        {
            k++;
            prime[k]=i;
        for(long long j=i*i; j<mx; j+=i)
        is_prime[j]=true;
        }
    }
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<prime[n]<<endl;
    }
}