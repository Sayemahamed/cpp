#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<char> v;
    cin >> s;
    for (auto it:s)
    {
        if(it !='+')
        v.push_back(it);
    }
    sort(v.begin(),v.end());
    for (long i = 0; i < v.size(); i++)
    {
        if(i !=v.size()-1)
        {
            cout << v[i] <<"+";
        }
        else
        cout << v[i]<<endl;
    }
}