#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long ringSize ,ans=0;
        cin >> ringSize;
        vector<long long> ring(ringSize);
        for(auto&it: ring)cin >>it;
        while(ring.size())
        {
            ans++;
            while(ring[0]==ring[ring.size()-1])ring.pop_back();
            if(ring.size())ring.pop_back();
        }
        cout<<ans<<endl;
    }
}