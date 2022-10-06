#include <bits/stdc++.h>
using namespace std;
vector <char> dtat;
void generatingSubset(vector <char> &dtat,string &s,int position)
{
    if(s.length()==position)
    {
        dtat.push_back('\n');
        for(auto &it:dtat)cout<<it;
        dtat.clear();
        return;
    }
    generatingSubset(dtat,s,position+1);
    dtat.push_back(s[position]);
    generatingSubset(dtat,s,position+1);
    dtat.clear();
}
int main()
{
    string s;
    cin >> s;
    generatingSubset(dtat,s,0);
}