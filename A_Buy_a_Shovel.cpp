#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long a;
    cin>>s>>a;
    for (int i = 1; true; i++)
    {
        if((((s[s.length()-1]-48)*i)%10)==a||(((s[s.length()-1]-48)*i)%10)==0)
        {
            cout<<i<<endl;
            break;
        }
    }
}