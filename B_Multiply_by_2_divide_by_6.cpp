#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while (test--)
    {
        long long n,ans=0,flag =false;
        cin >> n;
        while(n)
        {
            if(n==1)break;
            if(n&1)
            {n<<=1;ans++;}
            else if(!(n%6))
            {
                n/=6;ans++;
            }
            else 
            {
                flag = true;
                break;
            }
        }
        if (flag)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}