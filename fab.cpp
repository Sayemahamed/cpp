#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,multiset<string>>data;
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        int x;
        cin >>s>> x;
        data[-1*x].insert(s);
    }
    for(auto &it :data)
    {
        for(auto &it1:it.second){
            cout<<it1<<" "<<-1*it.first<<endl;
        }
    }
}