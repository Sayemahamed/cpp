#include <bits/stdc++.h>
using namespace std;
vector <char> datas;
void generatingSubset(vector <char> datas,string &s,int position)
{
    if(s.length()==position)
    {
        datas.push_back('\n');
        for(auto &it:datas)cout<<it;
        return;
    }
    generatingSubset(datas,s,position+1);
    datas.push_back(s[position]);
    generatingSubset(datas,s,position+1);
    datas.pop_back();
}
int main()
{
    string s;
    cin >> s;
    generatingSubset(datas,s,0);
}