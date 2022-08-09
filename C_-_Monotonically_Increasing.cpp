#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,i=1,j=1;
    cin >> x >> y;
    long long arr[x+1];
    for(long long k=1;k<=x;k++)
    {
        arr[k] = 0;
    }
    while(true)
    {
        cout<<arr[i]+j<<" ";
        if(arr[i]+j==y)
        {
            arr[i]++;
            j=0;
        }
        j++;
        if(arr[i]==y)
        {
            i++;
        }

    }
}