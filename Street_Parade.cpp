#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    while(cin>>n)
    {
        if(n == 0)break;
        vector<long long> dat(n);
        for(auto&it:dat)cin>>it;
        stack<long long>sideRoad;
        long long need = 1;
        for(auto&it:dat)
        {
            if(it==need)need++;
            else 
            {
                sideRoad.push(it);
            }
            while(sideRoad.size()and sideRoad.top()==need)
            {
                sideRoad.pop();need++;
            }
        }
        if(sideRoad.empty())cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}