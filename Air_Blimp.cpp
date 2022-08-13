#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n,x,y,count=0;
        cin >> n >> x >> y;
        long long arr[n+1],l=n,m=1;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if(arr[i]>arr[m])m=i;
        }
        if(y>=x)
        {
            count =arr[m]/y;
            if(arr[m]%y>0)count++;
        }
        else
        while (n--)
        {
            if(l==0)break;
            if(arr[l]>0)
            {
            arr[l]-=x;
            count++;
            }
            else{
            arr[l-1]-=y*count;    
            l--;
            } 
        }
        cout<<count<<endl;
    }
}