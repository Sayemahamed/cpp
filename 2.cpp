#include<bits/stdc++.h>
using namespace std;
map<char,int>value={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
string pal(string s)
{
    stack <char> data;
    for(auto it: s)
    {
        if(value[it]<0)data.push(it);
        else
        {
            if(data.empty())return "NO";
            if(value[it]+value[data.top()]!=0)return "NO";
            data.pop();
        }
    }
    if(data.empty())return "YES";
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout<< pal(s)<<endl;
    }
}