#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    long long siz,i,j;
    cin>>siz;
    i=j=siz-1;
    vector<long long>dat(siz);
    for(auto& it:dat )cin>>it;
    vector<bool>idx(siz,true);
    while (j>=0)
    {
        i=min(i,j-dat[j]);
        if(i<0)i=0;
        while(j>i){if(!idx[i])break;else idx[i++]=false;}
        j--;
    }
    cout<<count(idx.begin(),idx.end(),true)<<endl;
}