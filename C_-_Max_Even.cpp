#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers;
    cin >> numbers;
    vector<long long>even ,odd;
    for (long long i = 0; i < numbers; ++i)
    {
        long long x;
        cin >> x;
        if(x&1)
        odd.push_back(x);
        else
        even.push_back(x);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    // if(even.size()<2&&odd.size()<2){cout<<-1 <<endl;return 0;}
    long long oddSum=-1,evenSum=-1;
    if(even.size()==1)evenSum=-1;
    else if(even.size()>1)evenSum=even[even.size()-2]+even[even.size()-1];
    if(odd.size()==1)oddSum=-1;
    else if(odd.size()>1)oddSum=odd[odd.size()-2]+odd[odd.size()-1];

    if(oddSum>evenSum)cout<<oddSum<<endl;
    else cout<<evenSum<<endl;
}