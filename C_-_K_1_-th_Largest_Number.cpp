#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long numberOfElements;
    cin >> numberOfElements;
    vector<long long> data,uniqueData;
    for (long long i = 0; i < numberOfElements; ++i)
    {
        long long x;
        cin >> x;
        data.push_back(x);
        uniqueData.push_back(x);
    }
    sort(uniqueData.begin(), uniqueData.end());
    auto last=unique(uniqueData.begin(), uniqueData.end());
    uniqueData.erase(last,uniqueData.end());
    for (auto& x : uniqueData) 
    cout<<x<<" ";
    cout    <<endl;
    for(auto& it:data)
    {
        cout<<uniqueData.size()- (find(uniqueData.begin(),uniqueData.end(),it)-uniqueData.begin())<<endl;
    }
}