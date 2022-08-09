#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for(auto& it:str)
    {
        if(it==',')it = ' ';
        if(isupper(it))it=tolower(it);
        else it=toupper(it);
    }
    cout << (str);
}