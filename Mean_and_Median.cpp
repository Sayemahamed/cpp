#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a,b;
        cin >> a >> b;
        if(a>0)
        cout << 0 << " " << b << " "<<(a*3)-b<<endl;
        else

        cout <<a*3 -b << " " << b << " "<<0<<endl;
    }
}