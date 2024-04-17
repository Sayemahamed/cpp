#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 ,s2;
    cin>>s1>>s2;
    if (s1==s2)
    cout<<-1<<endl;
    else
    {
        if(s1.length()>s2.length())
        cout<<s1.length()<<endl;
        else
        cout<<s2.length()<<endl;
    }
}