#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,k; 
    cin>>k;
    while(k--)
    {
        long long p1=0,p2=0,p3=0;
    cin>>t;
    map<string,int>data,player1,player2,player3;
    for(long long i = 0; i <t; ++i)
    {
        string s;
        cin>>s;
        data[s]++;
        player1[s]++;
    }
    for(long long i = 0; i <t; ++i)
    {
        string s;
        cin>>s;
        data[s]++;
        player2[s]++;
    }
    for(long long i = 0; i <t; ++i)
    {
        string s;
        cin>>s;
        data[s]++;
        player3[s]++;
    }
    for(auto it:data)
    {
        if(it.second==1)
        {
            if(player1.find(it.first)!=player1.end())p1+=3;
            if(player2.find(it.first)!=player2.end())p2+=3;
            if(player3.find(it.first)!=player3.end())p3+=3;
        }       
        if(it.second==2)
        {
            if(player1.find(it.first)!=player1.end())p1+=1;
            if(player2.find(it.first)!=player2.end())p2+=1;
            if(player3.find(it.first)!=player3.end())p3+=1;
        }
    }
    cout<<p1<<" "<<p2<<" "<<p3<<endl;
    }
}