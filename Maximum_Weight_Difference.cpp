#include<bits/stdc++.h>
using   namespace std;
int main()
{
    long long t;
    cin>>t; 
    while (t--)
    {
        long long a,b,sum=0,sum1=0;
        cin>>a>> b;
        long long arr[a];
        if(b>a-b)b=a-b;
        for(long long i=0; i<a; i++)cin>>arr[i];
        sort(arr, arr+a);
        for (long i = 0; i <b; i++)
            sum+=arr[i];
        for (long long i = b; i <a; i++)sum1+=arr[i];
        cout<<abs(sum1-sum)<<endl;
    }
}