#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long cards;
        cin >> cards;
        map<long long, long long> data;
        for(long long i = 0; i < cards; i++)
        {
            long long x;
            cin >> x;
            data[x]++;
        }
        long long mx=-1;
        for(auto& it : data)
        {
            if(it.second>mx)mx=it.second;
        }
        cout <<cards-mx <<endl;
    }
}