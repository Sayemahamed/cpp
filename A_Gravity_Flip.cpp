#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long t;
    cin >> t;
    long long arr[t];
    for (int i = 0; i < t; ++i) cin>>arr[i];
    sort(arr,arr+t);
    for(auto it:arr)cout<<it<<" ";
}