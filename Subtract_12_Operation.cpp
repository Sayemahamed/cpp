#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        long long arr[(int)n];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=n-1;i>1;--i)
        {
            long long x=arr[i]/2;
            if(arr[i]>0)
            {
            arr[i-1]-=x;
            arr[i]=arr[i]%2;
            }
        }
        for(int i=0;i<n;i++)
        {
            sum+=abs(arr[i]);
        }
        cout<<  sum << endl;
    }
}