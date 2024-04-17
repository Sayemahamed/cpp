#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long cities,location,ans=0;
    cin>>cities>>location;
    bool city[cities+1];
    memset(city,0,sizeof(city));
    for (long long i=1;i<=cities;i++)cin>>city[i];
    // for(auto &it : city)cout<<it<<' ';
    if(city[location])ans++;
    long long i=location,j=location;
    while(i>0||j<=cities)
    {
        i--;j++;
        if(i>0&&j<=cities)
        {
            if(city[i]&&city[j])ans+=2;
        }
        else if(i>0)
        {
            if(city[i])ans++;
        }
        else if(j<=cities)
        if(city[j])ans++;
    }
    cout<<ans;
}