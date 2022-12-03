#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        string s;
        cin >> s;
        cout << s ;
        reverse(s.begin(),s.end());
        cout << s<< endl;
    }
}