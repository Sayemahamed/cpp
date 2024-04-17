#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,min,max;
    cin>>t;
    long long arr[t+1];
    for(int i=1;i<=t;i++)
    cin>>arr[i];
    for(long long i=1;i<=t;i++)
    {
        if(i==1)
        {
            min=abs(arr[i]-arr[i+1]);
        }
        else if(i==t)
            min=abs(arr[i]-arr[i-1]);
        else
        {
            if(abs(arr[i]-arr[i+1])<abs(arr[i]-arr[i-1]))
            min=abs(arr[i]-arr[i+1]);
            else
            min=abs(arr[i]-arr[i-1]);
        } 
        
        
        if(abs(arr[i]-arr[1])>abs(arr[i]-arr[t]))
        {
            max=abs(arr[i]-arr[1]);
        }
        else
        {
            max=abs(arr[i]-arr[t]);
        }
        cout<<min<<" "<<max<<endl;
    }
}