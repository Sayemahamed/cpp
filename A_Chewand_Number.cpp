#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(auto &it:s)
    {
        if(it>'4')
        it='9'-it+48;
    }
    if(s[0]=='0')
    s[0]='9';
    cout << s << endl;
}