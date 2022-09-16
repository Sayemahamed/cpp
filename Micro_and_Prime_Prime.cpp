#include<bits/stdc++.h>
using namespace std;
const long long Mx=1000009;
long long Prime_prime[Mx];
bool prime[Mx];
long long Sum[Mx];
int main()
{
    ios_base::sync_with_stdio(false);
    prime[0]=prime[1]=true;
    for (int i = 2; i*i <= Mx; i++)
    {
        if(!prime[i])
        for(long long j = i*i; j <= Mx; j+=i)
        prime[j]=true;
    }
    long long t,count=0;
    for (int i = 0; i <= Mx; i++)
    {
        if(!prime[i])count++;
        Sum[i]=count;
    }
    count=0;
    for(long long i=0; i<=Mx; i++)
    {
        if(!prime[Sum[i]])count++;
        Prime_prime[i]=count;
    }
    cin>>t;
    while(t--)
    {
        long long L,R;
        cin>>L>>R;
        cout<<Prime_prime[R]-Prime_prime[L-1]<<endl;
    }
}