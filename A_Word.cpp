#include<bits/stdc++.h>
using namespace std;
int main()
{
    int u=0,l=0;
    string str;
    cin >> str;
    for(auto it:str)
    {
        if(isupper(it))u++;
        else 
        l++;
    }
    for(auto it:str)
    {
        if(u>l)
        it=toupper(it);
        else
        it=tolower(it);
    cout << it;
    }
}