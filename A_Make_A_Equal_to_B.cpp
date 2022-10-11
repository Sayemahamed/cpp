#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int number;
        cin>>number;
        int onesCountA=0,zerosCountA=0,onesCountB=0,zerosCountB=0;
        int ar[number+3],br[number+3];
        for(int i=0;i<number;i++)
        {
            cin>>ar[i];
            if(ar[i]==0)onesCountA++;
            else zerosCountA++;
        }
        for(int i=0;i<number;i++)
        {
            cin>>br[i];
            if(br[i]==0)onesCountB++;
            else zerosCountB++;
        }
        int ans1=0,ans2;
        for(int i=0;i<number;i++)
        {
            if(ar[i]!=br[i])ans1++;
        }

        ans2=abs(onesCountA-onesCountB)+abs(zerosCountA-zerosCountB);
        ans2/=2;
        ans2++;
        //cout<<ans1<<" "<<ans2<<endl;
        cout<<min(ans1,ans2)<<endl;

    }
}
