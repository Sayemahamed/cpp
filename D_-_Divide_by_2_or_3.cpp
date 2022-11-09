#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers,flag = true,ans=0;
    cin >> numbers;
    for (long long i = 0; i < numbers;++i)
    {
        long long x; 
        cin >> x;
        if(x%3==0&&x>0)
        ans+=abs(x/3);
        else if(x%2==0&&x>0)
        ans+=abs(x/2);
        else if(x!=1)
        {
            flag= false;
            break;
        }
    }
    if(flag)
    cout <<ans<<endl;
    else cout<<-1<<endl;
}