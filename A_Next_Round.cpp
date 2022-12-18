#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, place;
    cin >> size >> place;
    vector<long long> data(size);
    for(auto &it:data)cin >>it;
    sort(data.begin(), data.end());
    cout<<data.end()-lower_bound(data.begin(),data.end(),place)<<endl;
}