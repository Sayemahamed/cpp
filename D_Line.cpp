#include<bits/stdc++.h>
using namespace std;
void improve(string& str,long long size)
{
    for(long long i=0; i<str.length(); i++)
    {
        if(str[i] == 'R'&&i>size)
        {
            str[i] = 'L';
            return;
        }
        if(str[i] == 'L'&&i<size)
        {
            str[i] = 'R';
            return;
        }
    }
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string arr;
        cin>>arr;
        while(n--)
        {
            improve(arr, arr.length()/2);
           // cout<<arr<<" ";
        long long count = 0;
        for(int i=0; i<arr.length(); i++)
        {
            if(arr[i]=='L')count+=i;
            else
            count+=arr.length()-i-1;
        }
        cout<<count<<" ";
        }
        cout<<endl;
    }
}