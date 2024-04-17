#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,ans=0;
    cin >> t;
    long long ar1[t],ar2[t];
    for (int i = 0; i < t; i++)
    {
        cin >> ar1[i];
        cin >> ar2[i];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if(i!=j)
            {
                if(ar1[i]==ar2[j])ans++;
            }
        }
    }
    cout<<ans<<endl;
}