#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;cin>>s;
    long long i=1;
    queue<long long> q;
    stack<long long>st;
    for(auto&it:s)
    {
        if(it=='r')q.push(i++);
        else st.push(i++);
    }
    while(!q.empty())
    {
        cout<<q.front()<<'\n';
        q.pop();
    }
    while(!st.empty())
    {
        cout<<st.top()<<'\n';
        st.pop();
    }
}