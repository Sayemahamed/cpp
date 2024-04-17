#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,count=0;
    cin >> t;
    char arr[t];
    t--;
    cin >> arr[t];
    while (t--) 
    {
        cin >> arr[t];
        if(arr[t]==arr[t+1])count++;
    }
    cout<<count<<endl;
}