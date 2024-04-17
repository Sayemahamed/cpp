#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long int t;
    cin >> t;
    long long int arr[t+2];
    for (int i = 1; i <= t; ++i)
    {
        cin >> arr[i];
    }
    long long n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        long long int a,b;
        cin >> a >> b;
        arr[a-1]+=b-1;
        arr[a+1]+=arr[a]-b;
        arr[a]=0;
    }
    for (int i = 1; i <= t; ++i)
    cout<<arr[i]<<endl;
}