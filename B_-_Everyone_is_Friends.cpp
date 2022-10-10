#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long peopleCount,party,flag=true;
    cin>>peopleCount>>party;
    bool meet[peopleCount+1][peopleCount+1];
    for(long long i=1; i<=peopleCount; i++)
    for(long long j=1; j<=peopleCount; j++)
    meet[i][j]=false;
    for(long long i=0;i<party;i++)
    {
        long long people;
        cin>>people;
        long long attendees[people];
        for(long long j=0;j<people;j++)cin>>attendees[j];
        for(long long k=0;k<people;k++)
        {
            for(long long l=0;l<people;l++)
            meet[attendees[k]][attendees[l]]=true;
        }
    }
    for(long long k=1;k<=peopleCount;k++)
    for(long long l=1;l<=peopleCount;l++)
    {
        if(meet[k][l]==false)flag=false;
    }
    if(flag)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}