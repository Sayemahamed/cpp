#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,m=0,mx=0;
        cin>>a;
        long long arr[a];
        for(long long i=0;  i<a; i++)
        {
            cin>>arr[i];
            if (arr[i]>arr[mx])mx=i;
            if(arr[i]<arr[m])m=i;
        }
        if(arr[m]>0)
        cout<<arr[m]*arr[m]<<" "<<arr[mx]*arr[mx]<<endl;
        else
        cout<<arr[m]*arr[mx]<<" "<<arr[mx]*arr[mx]<<endl;

    }
}