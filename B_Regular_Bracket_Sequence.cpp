#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    long long ans = 0, current = 0;
    while(cin>>c)
    {
        if(c=='(')current--;
        else if(current<0)
        {
            current++;
            ans++;
        }
    }
    cout<<(ans<<1)<<endl;
}