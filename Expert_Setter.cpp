#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        float submit,approved;
        cin >> submit >> approved;
        if(approved/submit>=0.5)
        cout <<"YES"<<endl;
        else    cout <<"NO"<<endl;
        
    }
}