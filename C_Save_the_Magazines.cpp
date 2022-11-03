#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test ;
    cin >> test ;
    while (test --)
    {
        long long boxes,ans=0;
        cin >> boxes;
        char lids[boxes+1];
        long long mega[boxes+1];
        mega[0]=-9999999;
        for(long long i = 1; i <= boxes; i++)cin >>lids[i];
        for(long long i = 1; i <= boxes; i++)cin >>mega[i];
        // for(auto& it:mega)cout << it;
        for(long long i = 1; i <= boxes; i++)
        {
            if(lids[i]=='1')
            {
                if(mega[i]>mega[i-1]&&mega[i]>mega[i+1])
                ans+=mega[i],mega[i]=-9999;
                else if(mega[i]<mega[i-1]&&mega[i-1]>=mega[i+1])ans+=mega[i-1],mega[i-1]=-9999;
                else if(mega[i]<mega[i+1]&&mega[i-1]<=mega[i+1])ans+=mega[i+1],mega[i+1]=-9999;
            }
        }
        cout <<ans<< endl;
    }
}a