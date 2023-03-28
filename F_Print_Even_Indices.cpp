#include<bits/stdc++.h>
using namespace std;
void print(vector<long long>&dat,long long idx){
    if(idx==dat.size()) return;
    print(dat,idx+1);
    if(!(idx&1))cout<<dat[idx]<<" ";
}
int main()
{
    long long n;cin>>n;
    vector<long long>dat(n);
    for(auto&it:dat)cin>>it;
    print(dat,0);
}