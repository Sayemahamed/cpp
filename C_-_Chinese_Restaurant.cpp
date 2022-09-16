#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,count=0;
    cin>>t;
    long long arr[t];
    for (long long i = 0; i < t; ++i)
    {
        cin >>arr[i];
        if (arr[i] == i||arr[i] == (arr[i]+1)%t||arr[i] == (arr[i]-1+t)%t)count++;
    }
    cout<<count<<endl;
}