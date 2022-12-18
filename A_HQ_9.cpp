#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = false;
    string s;
    cin >> s;
    for(auto & it:s)
    {
        if(it == 'H' or it == 'Q' or it == '9')
        {
            flag = true;
            break;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}