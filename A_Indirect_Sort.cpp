#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while (test--) 
    {
        long long a;
        cin>>a;
        long long arr[a];
        for (int i = 0; i < a;i++) cin>>arr[i];
        if(arr[0]==1)
        cout<<"Yes"<< endl;
        else cout<<"No"<<endl;
    }
}