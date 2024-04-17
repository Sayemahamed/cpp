#include<bits/stdc++.h>
using namespace std;
long long arr[100000+7];
int main()
{
    long long t,j;
    cin>>t;
    j=t;
    for(long long i=1; i<=t; i++)
    {
        long long n;
        cin>>n;
        arr[n]=n;
        if(arr[j])
        {
            while(arr[j])
            {
                cout<<arr[j]<<" ";
                j--;
            }
            cout<<endl;
        }
        else
        cout<<endl;
    }
}