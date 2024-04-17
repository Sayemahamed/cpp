#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set<char>data;
    getline(cin, s);
    for(auto it:s)
    {
        if(it!=' '&&it!=','&&it!='{'&&it!='}')
        data.insert(it);
    }
    cout << data.size()<<endl;
}