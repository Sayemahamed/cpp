#include<bits/stdc++.h>
using namespace std;
void parentheses(long long limit,long long left,long long right,string& s)
{
    if (left>=limit&&right>=limit)
    {
        cout<<s<<endl;
        return;
    }
    if(left<limit)
    {
        s.push_back('(');
        parentheses(limit,left+1,right,s);
        s.pop_back();
    }
    if(right<=limit&&right<left)
    {
        s.push_back(')');
        parentheses(limit,left,right+1,s);
        s.pop_back();
    }
} 
int main()
{
    long long n;
    cin >> n;
    string s;
    parentheses(n,0,0,s);
}