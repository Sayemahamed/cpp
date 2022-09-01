#include<bits/stdc++.h>
using namespace std;
map<char,int>value={{'(',-3},{'{',-2},{'[',-1},{']',1},{'}',2},{')',3}};
string solution(string str)
{
    stack<char> data;
    for(auto it:str)
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
    long long t;
    cin >> t;
    while (t--) 
    {
        string str;
        cin >> str;
        cout<<solution(str)<<endl;
    }
}