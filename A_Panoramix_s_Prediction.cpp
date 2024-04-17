#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,arr[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53},i=0;
    cin >> a >> b;
    for(; i<16; i++)
    {
        if(arr[i]==a)break;
    }
    if(arr[i+1]==b)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}