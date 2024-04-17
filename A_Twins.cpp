#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers,totalSum=0,evilSum=0,ans=0;
    cin >> numbers;
    long long coin[numbers];
    for (long long i=0; i<numbers; i++)cin >>coin[i],totalSum+=coin[i];
    sort(coin,coin+numbers);
    // cout<<totalSum<<endl;
    while (evilSum*2<=totalSum)
    {
        evilSum+=coin[numbers-1];
        numbers--;
        ans++;
    }
    cout <<ans<<endl;
}