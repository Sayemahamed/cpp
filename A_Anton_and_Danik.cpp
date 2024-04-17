#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;

        long long a=0,n=0;
        string s;
        cin >> s;
        for(auto it:s)
        {
            if(it=='D')
            n++;
            else
            a++;
        }
        if(a>n)
        cout << "Anton"<<endl;
        else if(a<n)
        cout << "Danik"<<endl;
        else
        cout << "Friendship"<<endl;
    
}


