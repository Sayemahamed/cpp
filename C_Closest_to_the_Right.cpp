#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers,query;
    cin >> numbers >> query;
    vector<long long> data(numbers);
    for(auto &it : data)cin >> it;
    while(query--)
    {
        long long x;
        cin >> x;
        cout<<lower_bound(data.begin(),data.end(),x)-data.begin()<<endl;
    }
}