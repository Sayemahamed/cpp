#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long a,b,sum=0;
        cin>>a>>b;
        long long arr[a];
        for(long long i=0; i<a; i++)cin>>arr[i];
        sort(arr,arr+a);
        for(long long i=0; i<b; i++)arr[i]=abs(arr[i]);
        for(long long i=0; i<a; i++)
        if(arr[i]>0)sum+=arr[i];
        cout<<sum<<endl;
    }
}