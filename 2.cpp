#include<bits/stdc++.h>
using namespace std;
map<char,int> value={{'(',-3},{'{',-2},{'[',-1},{')',3},{']',1},{'}',2}};
string is_palin(string s)
{
    stack<char> stack;
    for(auto it:s)
    {
        if(value[it]<0)stack.push(it);
        else
        {
            if(stack.empty()) return "NO";
            if(value[it]+value[stack.top()]!=0)return "NO";
            else
            {
                stack.pop();
            }
        }
    }
    if(!stack.empty()) return "NO";
    return "YES";
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<is_palin(s)<<endl;
    }
}