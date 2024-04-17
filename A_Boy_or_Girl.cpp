#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set<char>data;
    int size=0;
    cin >> s;
    for(auto it:s)
    {
        data.insert(it);
    }
    size=data.size();
    if(size%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    cout<<"IGNORE HIM!"<<endl;
}