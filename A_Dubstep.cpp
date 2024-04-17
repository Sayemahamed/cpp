#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    while(s.find("WUB") != -1)
    {
        s.insert(s.begin()+s.find("WUB"),' ');
        s.erase(s.begin()+s.find("WUB"),s.begin()+s.find("WUB")+3);
    }
    while(s.find("  ") != -1)
        s.erase(s.begin()+s.find("  "));


    cout<<s;
}